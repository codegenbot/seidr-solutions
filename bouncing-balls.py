def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += s_height * bounciness_index
        s_height *= bounciness_index

    print(total_distance)


bouncing_balls()