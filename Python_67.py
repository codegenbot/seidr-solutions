def fruit_distribution(s, n):
    # Parse the input string using regular expressions to extract the number of apples and oranges
    matches = re.search(r"(\d+) apples", s)
    if not matches:
        apple_count = 0
    else:
        apple_count = int(matches[1])

    matches = re.search(r"(\d+) oranges", s)
    if not matches:
        orange_count = 0
    else:
        orange_count = int(matches[1])

    # Calculate the number of mango fruits in the basket
    mango_count = n - apple_count - orange_count

    return mango_count