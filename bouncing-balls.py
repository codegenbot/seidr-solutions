def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h1 + h2) * (1 - 0.5**bounces) / (1 - 0.5)

    return f"{total_distance:.4f}"


print(bouncing_balls())