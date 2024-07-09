```
def calculate_discounted_price(price, discount_rate):
    """
    Returns the discounted price given a price and a discount rate.

    Parameters:
    price (float): The original price of the item
    discount_rate (float): The percentage of the discount

    Returns:
    float: The discounted price of the item
    """
    return price * (1 - discount_rate / 100)

def main():
    price = float(input("Enter the price: "))
    discount_rate = float(input("Enter the discount rate (in %): "))
    discounted_price = calculate_discounted_price(price, discount_rate)
    print(f"The discounted price is ${discounted_price:.2f}")

if __name__ == "__main__":
    main()