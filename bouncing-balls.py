def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    num_bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    current_height = f_height
    for _ in range(num_bounces):
        total_distance += 2 * (s_height + current_height)
        current_height *= bounciness_index

    return str(round(total_distance, 4))


print(bouncing_balls())