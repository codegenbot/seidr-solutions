def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        height = start_height * (bounciness_index ** (2 ** i))
        total_distance += 2 * height

    print(total_distance)