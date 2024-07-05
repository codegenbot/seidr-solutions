def fruit_distribution(s, n):
    # Parse the input string to extract the number of apples and oranges
    apple_count = int(s.split("and")[0].strip().split()[-1])
    orange_count = int(s.split("and")[1].strip().split()[-1])
    
    # Calculate the number of mango fruits in the basket
    mango_count = n - apple_count - orange_count
    
    return mango_count