def calculate_total_cost(items: list[dict], tax_rate: float) -> float:
    total_cost = sum(item["price"] * item["quantity"] for item in items)
    return total_cost + (total_cost * tax_rate)


if __name__ == "__main__":
    user_input = []
    while True:
        item_name = input("Enter the name of an item (or 'stop' to finish): ")
        if item_name.lower() == "stop":
            break
        elif item_name:
            quantity = int(input(f"Enter the quantity of {item_name}: "))
            price = float(input(f"Enter the price of {item_name}: "))
            user_input.append({"name": item_name, "quantity": quantity, "price": price})
        else:
            print("Please enter a non-empty string.")
    tax_rate = float(input("Enter the tax rate (or press Enter for 0.08): ") or 0.08)
    if not user_input:
        print("No items entered. Exiting program.")
    else:
        print(calculate_total_cost(user_input, tax_rate))