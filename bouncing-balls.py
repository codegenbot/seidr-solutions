def bouncing_balls():
    height_start = float(input())
    height_first_bounce = float(input())
    bounciness_index = height_first_bounce / height_start
    num_bounces = int(input())
    total_distance = (2**num_bounces - 1) * height_first_bounce
    print(bounciness_index)
    print(total_distance)


bouncing_balls()