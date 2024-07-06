def fruit_distribution(s, n):
    # Split the string into apples and oranges
    apples, oranges = s.split(" and ")

    # Convert the strings to integers
    apples = int(apples)
    oranges = int(oranges)

    # Calculate the number of mangoes
    mangoes = n - apples - oranges

    return mangoes