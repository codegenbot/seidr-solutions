def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height

    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += 2 * (current_height + current_height * bounciness_index)
        current_height *= bounciness_index

    return str(format(total_distance, ".4f"))


print(bouncing_balls())