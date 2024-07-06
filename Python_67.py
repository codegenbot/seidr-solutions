def fruit_distribution(basket_size):
    input_string = input(
        "Enter a string containing 'apples', 'oranges', and 'mangoes': "
    )
    if not all(fruit in input_string for fruit in ["apples", "oranges"]):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    apple_count = re.search("\d+", input_string.split("and")[0])
    orange_count = re.search("\d+", input_string.split("and")[1])
    if not (apple_count and orange_count):
        raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")
    mango_count = len(input_string) - int(apple_count) - int(orange_count)
    return mango_count