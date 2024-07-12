def calculate_total_cost(items):
    total_cost = 0
    for item in items:
        total_cost += item.cost
    return total_cost


def main():
    class Item:
        def __init__(self, name):
            self.name = name
            self.cost = 0

    def calculate_total_cost(items):
        total_cost = 0
        for item in items:
            total_cost += item.cost
        return total_cost

    items = []
    while True:
        user_input = input("Enter an item (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        elif not isinstance(user_input, str):
            raise ValueError("Invalid input. Please enter an item or 'stop'.")
        new_item = Item(user_input.strip())
        while True:
            try:
                cost = float(input(f"Enter the cost of {user_input}: "))
                new_item.cost = cost
                items.append(new_item)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
        if user_input.lower() == "stop":
            break

    if items:
        result = calculate_total_cost(items)
        print(f"The total cost is: {result}")
    else:
        print("No items were provided.")