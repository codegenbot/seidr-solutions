```
import math


def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 2  # the ball travels up and down once initially, so add 2 for this

    for i in range(1, num_bounces):
        start_height /= math.sqrt(bounciness_index)
        total_distance += 4  # the ball travels up and down with height of start_height and then again from (start_height - 1) to 0

    print(total_distance)