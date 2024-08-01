def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height

    num_bounces = int(input())

    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += start_height + (current_height - start_height) * 2
        current_height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()