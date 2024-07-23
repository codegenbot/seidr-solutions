def total_cost(price: int, quantity: int):
    return price * quantity


price = int(input("Enter the product's price per unit: "))
quantity = int(input("Enter the quantity of the product: "))
result = total_cost(price, quantity)
print(f"The total cost is ${result}.")