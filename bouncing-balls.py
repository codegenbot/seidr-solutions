def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    initial_velocity = 0.5 * (2 ** 0.5)
    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            distance = 2 * initial_velocity
        else:
            distance = -distance * bounciness_index + 2
        total_distance += distance
    print(total_distance)

bouncing_balls()