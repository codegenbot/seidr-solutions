def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (2 ** (bounces + 1) - 1) * h2

    return "{:.6f}\n{}".format(bounciness_index, total_distance)


print(bouncing_balls())