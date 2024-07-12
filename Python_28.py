```
class Item:
    def __init__(self, name):
        self.name = name
        self.cost = 0

def calculate_total_cost(items):
    total_cost = 0
    for item in items:
        cost = float(input(f"Enter the cost of {item.name}: "))
        item.cost = cost
        total_cost += cost
    return total_cost


items = []
while True:
    try:
        user_input = input("Enter an item (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        elif not isinstance(user_input, str):
            raise ValueError("Invalid input. Please enter an item or 'stop'.")
        items.append(Item(user_input.strip()))
    except ValueError:
        print("Invalid input. Please enter an item or 'stop'.")

if items:
    result = calculate_total_cost(items)
    print(f"The total cost is: {result}")
else:
    print("No items were provided.")