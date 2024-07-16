def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = round(first_bounce_height / start_height, 5)
    num_bounces = int(input())

    total_distance = 0
    height = start_height
    for i in range(1, num_bounces + 1):
        distance = 2 * height 
        total_distance += distance
        height *= bounciness_index
        total_distance += 2 * (height - height * bounciness_index)
    print(total_distance)