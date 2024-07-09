import math


def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = math.sqrt(first_bounce_height / start_height)

    total_distance = 2 * (start_height + first_bounce_height) + 1

    for i in range(1, num_bounces):
        start_height *= math.pow(bounciness_index, 2)
        total_distance += 2 * start_height + 1

    print(total_distance)