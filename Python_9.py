```
def calculate_discounted_price(price, discount_rate):
    return price * (1 - discount_rate / 100)

price = float(input("Enter the original price of the item: "))
discount_rate = int(input("Enter the percentage of the discount (e.g., 20 for 20%): "))

print(f"The discounted price is {calculate_discounted_price(price, discount_rate)}")