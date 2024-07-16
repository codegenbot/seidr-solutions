def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0

    for i in range(num_bounces):
        height = start_height
        distance_traveled = 0
        while height >= first_bounce_height:
            distance_traveled += height / bounciness_index * 2
            if height != first_bounce_height:
                total_distance += (height - first_bounce_height) * 4 / bounciness_index
            height /= 2
        start_height = height

    print(total_distance)