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
    # Get the price from the user
    price = float(input("Enter the price: "))

    # Get the discount rate from the user
    discount_rate = float(input("Enter the discount rate (in %): "))

    # Calculate and print the discounted price
    discounted_price = calculate_discounted_price(price, discount_rate)
    print(f"The discounted price is ${discounted_price:.2f}")

if __name__ == "__main__":
    main()