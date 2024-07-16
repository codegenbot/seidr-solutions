def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    previous_height = start_height

    for i in range(bounces):
        current_height = previous_height * (1 - (1 - bounciness_index) ** (i + 1))
        distance = 2 * (current_height - previous_height)
        total_distance += distance
        previous_height = current_height

    print(total_distance)


bouncing_balls()