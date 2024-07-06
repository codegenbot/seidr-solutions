def fruit_distribution(s, n):
    import re

    try:
        # Check if the input string contains both "apples" and "oranges"
        if not all(fruit in s for fruit in ["apples", "oranges"]):
            raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")

        # Parse the input string to extract the number of apples and oranges
        apple_count = re.search("\d+", s.split("and")[0])
        orange_count = re.search("\d+", s.split("and")[1])

        if not (apple_count and orange_count):
            raise ValueError("Invalid input: missing 'apples' or 'oranges' in string")

        # Calculate the number of mango fruits in the basket
        mango_count = n - int(apple_count) - int(orange_count)

    except ValueError as e:
        print("Invalid input. Please enter a valid input.")
        return

    return mango_count