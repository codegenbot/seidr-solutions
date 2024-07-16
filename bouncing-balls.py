def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height)

    total_distance = 0
    height = start_height
    for i in range(1, num_bounces + 1):
        total_distance += 2 * height 
        if i < num_bounces:
            height /= 2
    print(total_distance)