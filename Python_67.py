import re


def fruit_distribution(s, n):
    try:
        # Parse the input string using regular expressions to extract the number of apples and oranges
        matches = re.search(r"(\d+) apples", s)
        apple_count = int(matches[1])

        matches = re.search(r"(\d+) oranges", s)
        orange_count = int(matches[1])

        # Calculate the number of mango fruits in the basket
        mango_count = n - apple_count - orange_count

    except ValueError:
        return "Invalid input: No apples or oranges found."

    return mango_count