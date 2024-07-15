def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = 1 / (2 ** 0.5)

    total_distance = bounciness_index * start_height * num_bounces
    print(total_distance)