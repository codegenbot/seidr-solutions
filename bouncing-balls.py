def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += abs(current_height)
        current_height *= bounciness_index

    return format(total_distance, ".4f")


print(bouncing_balls())