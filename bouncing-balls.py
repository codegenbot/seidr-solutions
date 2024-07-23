def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * sum([first_bounce_height * (0.5 ** i) for i in range(bounces)])

    print(format(total_distance, ".4f"))


bouncing_balls()