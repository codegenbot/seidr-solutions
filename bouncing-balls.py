def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (bounciness_index**2 + 1) * 2

    return str(round(total_distance, 6))


print(bouncing_balls())