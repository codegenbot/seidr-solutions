def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (2**0.5) / 2

    total_distance = 0
    current_height = start_height
    for i in range(num_bounces):
        distance = 2 * current_height
        total_distance += distance
        current_height /= 2

    print(total_distance)