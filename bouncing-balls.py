def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for i in range(num_bounces):
        if height > 0:
            distance = 2 * height
            total_distance += distance
        height = height * bounciness_index  

    print(total_distance)