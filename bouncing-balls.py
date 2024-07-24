def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (h2 + h1) * 2 * bounces

    return f"{bounciness_index:.4f}\n{total_distance:.4f}"


print(bouncing_balls())