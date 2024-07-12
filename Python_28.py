```
def main():
    class Item:
        def __init__(self, name):
            self.name = name
            self.cost = float(input(f"Enter the cost of {name}: "))

    def calculate_total_cost(items):
        return sum(item.cost for item in items)

    items = []
    while True:
        user_input = input("Enter an item (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        elif not isinstance(user_input, str):
            raise ValueError("Invalid input. Please enter an item or 'stop'.")
        items.append(Item(user_input.strip()))

    if items:
        result = calculate_total_cost(items)
        print(f"The total cost is: {result}")
    else:
        print("No items were provided.")

if __name__ == "__main__":
    main()