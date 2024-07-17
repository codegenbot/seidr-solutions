def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * (starting_height + first_bounce_height)
        starting_height, first_bounce_height = (
            first_bounce_height,
            starting_height * bounciness_index,
        )

    return round(total_distance, 5)


print(bouncing_balls())