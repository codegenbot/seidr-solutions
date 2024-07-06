def fruit_distribution(s, n):
    apples, oranges = s.split(" and ")
    num_apples = int(apples)
    num_oranges = int(oranges)
    return n - (num_apples + num_oranges)