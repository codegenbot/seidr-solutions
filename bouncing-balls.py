def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = (h2 / h1) ** bounces
    distance = 2 * (bounciness_index - 1)

    return str(round(distance, 4))


print(bouncing_balls())