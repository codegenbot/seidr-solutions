def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    b = int(input())

    bi = h2 / h1
    distance = 0

    for _ in range(b):
        h1, h2 = h2, h2 * bi
        distance += abs(h2 - h1)

    return round(distance, 5)


print(round(bouncing_balls(), 5))