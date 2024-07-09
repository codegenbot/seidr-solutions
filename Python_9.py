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