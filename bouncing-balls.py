def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * (1 - bounciness_index)

    return round(total_distance, 4)


print(bouncing_balls())