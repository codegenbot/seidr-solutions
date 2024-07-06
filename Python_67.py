
def fruit_distribution(s, n):
    # get number of apples and oranges from input string
    num_apples = int(s.split()[0])
    num_oranges = int(s.split()[2])
    return n - num_apples - num_oranges