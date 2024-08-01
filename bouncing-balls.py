def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    distance = 0
    for i in range(bounces):
        distance += (h2 - h1) * bounciness_index ** (i + 1)
        if i < bounces - 1:
            h1, h2 = h2, h2 - h2

    return round(distance, 4)


print(round(bouncing_balls(), 4))