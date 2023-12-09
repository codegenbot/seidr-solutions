def fruit_distribution(s,n):
    # Get the number of apples and oranges from the input string
    apple_count = int(s.split("apples")[0])
    orange_count = int(s.split("oranges")[0])

    # Calculate the number of mango fruits by subtracting the sum of apples and oranges from the total fruit count
    mango_count = n - (apple_count + orange_count)

    return mango_count