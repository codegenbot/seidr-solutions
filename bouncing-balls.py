def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / h1
    distance = (2 * (h1 + h2)) ** n / 3

    return str(bounciness_index) + "\n" + str(distance)


print(bouncing_balls())