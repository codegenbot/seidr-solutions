def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    bounciness_index_factor = start_height * bounciness_index
    total_distance = 0
    current_height = start_height
    for i in range(num_bounces):
        distance = 2 * current_height
        total_distance += distance + distance
        current_height /= 2

    print(total_distance)