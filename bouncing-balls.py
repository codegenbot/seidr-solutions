def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(num_bounces):
        new_height = (start_height + int(first_bounce_height * bounciness_index)) / 2
        total_distance += new_height
        start_height = new_height

    print(total_distance)


bouncing_balls()