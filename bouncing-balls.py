```
import math

def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height

    for i in range(1, num_bounces + 1):
        distance = 2 * current_height
        total_distance += distance
        current_height = first_bounce_height * (2 ** (bounciness_index ** i))

    print(total_distance)

bouncing_balls()