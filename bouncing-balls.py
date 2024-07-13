def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = (1 + 2 * (bounciness_index**0.5))
    for i in range(num_bounces - 1):
        total_distance *= (1 + 2 * (bounciness_index**0.5))
    print(total_distance)