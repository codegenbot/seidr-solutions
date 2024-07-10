def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = 0
    current_height = h2
    for _ in range(num_bounces):
        total_distance += current_height + h2
        current_height *= bounciness_index

    return str(round(total_distance, 4))


print(bouncing_balls())