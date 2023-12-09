def fruit_distribution(s):
    # parse the string to get the number of apples and oranges
    apple = int(s.split(' ')[0])
    orange = int(s.split(' ')[2])
    
    # calculate the number of mango fruits
    mango = n - apple - orange
    
    return mango