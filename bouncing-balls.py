def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounce_index = h2 / h1
    total_distance = (1 + bounce_index) ** bounces - 1

    return f"{total_distance:.4f}"


print(bouncing_balls())