def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height

    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    return round(total_distance, 6)


print(bouncing_balls())