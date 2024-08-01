def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / start_height
    total_distance = 2 * (1 - math.pow(bounciness_index, -num_bounces)) * start_height

    print(format(total_distance, ".4f"))


bouncing_balls()