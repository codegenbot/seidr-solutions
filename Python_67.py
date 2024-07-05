import re


def fruit_distribution(s, n):
    # Parse the input string using regular expressions to extract the number of apples and oranges
    matches = re.search(r"(\d+) apples", s)
    if not matches:
        return 0
    apple_count = int(matches[1])

    matches = re.search(r"(\d+) oranges", s)
    if not matches:
        return 0
    orange_count = int(matches[1])

    # Calculate the number of mango fruits in the basket
    mango_count = n - apple_count - orange_count

    return mango_count