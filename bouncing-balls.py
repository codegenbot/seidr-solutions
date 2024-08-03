def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height

    total_distance = 0
    current_height = starting_height
    for _ in range(num_bounces):
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()