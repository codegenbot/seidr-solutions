
def fruit_distribution(s, n):
    apples, oranges = s.split("and")
    num_apples = int(apples)
    num_oranges = int(oranges)
    total_fruits = num_apples + num_oranges
    num_mangoes = n - total_fruits
    return num_mangoes