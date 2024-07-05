def fruit_distribution(s, n):
    # Parse the input string to extract the number of apples and oranges
    apple_count, orange_count = (
        s.split("and")[0].strip().split()[-1],
        s.split("and")[1].strip().split()[-1],
    )

    # Convert the string values to integers
    apple_count = int(apple_count)
    orange_count = int(orange_count)

    # Calculate the number of mango fruits in the basket
    mango_count = n - apple_count - orange_count

    return mango_count