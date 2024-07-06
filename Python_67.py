def fruit_distribution(s):
    # Parse the input string to extract the number of apples and oranges
    apple_count = s.count('apple')
    orange_count = s.count('orange')

    # Calculate the number of mango fruits in the basket
    mango_count = len(s) - (apple_count + orange_count)

    return mango_count if mango_count > 0 else 0