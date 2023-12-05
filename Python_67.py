def fruit_distribution(s, n):
    # Calculate the number of apples and oranges
    num_apples = int(s.split(" ")[0])
    num_oranges = int(s.split(" ")[2])

    # Calculate the number of mangoes
    num_mangoes = n - num_apples - num_oranges

    return num_mangoes