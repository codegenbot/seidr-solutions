
def fruit_distribution(s, n):
    num_apples = int(s.split()[0])
    num_oranges = int(s.split()[1].replace("and", ""))
    return n - num_apples - num_oranges