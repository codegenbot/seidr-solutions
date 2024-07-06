
def fruit_distribution(input):
    import re
    if not all(fruit in input for fruit in ["apples", "oranges"]):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    apple_count = re.search("\d+", input.split("and")[0])
    orange_count = re.search("\d+", input.split("and")[1])
    if not (apple_count and orange_count):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    mango_count = len(input) - int(apple_count) - int(orange_count)
    return mango_count