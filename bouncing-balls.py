def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height

    total_distance = 0
    for _ in range(num_bounces):
        starting_height *= bounciness_index
        total_distance += starting_height

    print(total_distance)


bouncing_balls()