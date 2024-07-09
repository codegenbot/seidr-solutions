def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h1 + h2) * (2**bounces - 1)

    return str(bounciness_index) + "\n" + str(total_distance)


print(bouncing_balls())