def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h2 + h1) * bounciness_index**bounces

    return str(round(total_distance, 4))


print(bouncing_balls())