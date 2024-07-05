def fruit_distribution(s):
    import re

    # Parse the input string to extract the number of apples and oranges
    apple_count = int(re.search("\d+", s.split("and")[0])[0])
    orange_count = int(re.search("\d+", s.split("and")[1])[0])

    # Calculate the number of mango fruits in the basket
    mango_count = apple_count + orange_count

    return mango_count