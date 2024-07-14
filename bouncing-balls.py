def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        start_height *= bounciness_index
        total_distance += start_height

    print(format(total_distance, ".4f"))


bouncing_balls()