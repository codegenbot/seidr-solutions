
def fruit_distribution(input):
    import re
    
    # Check if the input string contains both "apples" and "oranges"
    if not all(fruit in input for fruit in ["apples", "oranges"]):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    # Parse the input string to extract the number of apples and oranges
    apple_count = re.search("\d+", input.split("and")[0])
    orange_count = re.search("\d+", input.split("and")[1])
    if not (apple_count and orange_count):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    # Calculate the number of mango fruits in the basket
    mango_count = len(input) - int(apple_count) - int(orange_count)
    return mango_count

assert fruit_distribution("1 apples and 100 oranges") == 19