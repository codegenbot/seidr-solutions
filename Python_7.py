```
def calculate_total_cost(items: list[dict], tax_rate: float) -> float:
    total_cost = sum(item["price"] * item["quantity"] for item in items)
    return total_cost + (total_cost * tax_rate)

if __name__ == "__main__":
    user_input = []
    while True:
        try:
            item_name = input("Enter the name of an item (or 'stop' to finish): ")
            if item_name.lower() == "stop":
                break
            elif item_name:
                while True:
                    try:
                        quantity = int(input(f"Enter the quantity of {item_name}: "))
                        price = float(input(f"Enter the price of {item_name}: "))
                        user_input.append({"name": item_name, "quantity": quantity, "price": price})
                        break
                    except ValueError:
                        print("Invalid input. Please enter valid integer for quantity and price.")
                else:
                    continue
            else:
                print("Please enter a non-empty string.")
        except ValueError:
            print("Invalid input. Please enter valid data for item name.")

    if not user_input:
        print("No items entered. Please enter at least one item.")
    else:
        tax_rate_input = input("Enter the tax rate (or press Enter for 0.08): ")
        if tax_rate_input == "":
            tax_rate = 0.08
        else:
            tax_rate = float(tax_rate_input)
        print(calculate_total_cost(user_input, tax_rate))