import math


def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = math.sqrt(0.5)

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += (current_height * 2) + (current_height * 4)
        current_height *= bounciness_index

    return str(total_distance)