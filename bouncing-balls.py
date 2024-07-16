def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(bounces):
        if i == 0:
            distance = 2 * (start_height + first_bounce_height)
        else:
            distance = 2 * (start_height + first_bounce_height * bounciness_index ** (i + 1))
        total_distance += distance

    print(total_distance)


bouncing_balls()