def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_of_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height

    total_distance = 0
    for _ in range(num_of_bounces):
        total_distance += 2 * (starting_height + height_after_first_bounce)
        starting_height, height_after_first_bounce = (
            height_after_first_bounce,
            height_after_first_bounce / bounciness_index,
        )

    print(format(total_distance, ".4f"))


bouncing_balls()