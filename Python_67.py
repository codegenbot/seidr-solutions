def fruit_distribution(s, n):
    import re

    # Extract the number of apples and oranges from the input string
    apple_count = int(re.search(r"(\d+) apples?", s).group(1))
    orange_count = int(re.search(r"(\d+) oranges?", s).group(1))

    # Calculate the number of mango fruits in the basket
    mango_count = n - apple_count - orange_count

    return mango_count