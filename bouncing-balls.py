def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += current_height * (1 - bounciness_index)
        current_height *= bounciness_index

    return str(round(total_distance, 4))


print(bouncing_balls())