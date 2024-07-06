
def fruit_distribution(s, n):
    # split the string into two parts: apples and oranges
    apples, oranges = s.split("and")

    # convert the strings to integers
    apples = int(apples)
    oranges = int(oranges)

    # calculate the number of mangoes
    mangoes = n - apples - oranges

    return mangoes