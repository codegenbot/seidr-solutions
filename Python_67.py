def fruit_distribution(s: str, n: int) -> int:
    # Calculate the number of apples and oranges
    apple_count = int(s.split(" ")[0])
    orange_count = int(s.split(" ")[2])

    # Calculate the number of mango fruits
    mango_count = n - apple_count - orange_count

    return mango_count