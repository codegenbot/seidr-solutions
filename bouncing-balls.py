```
import math

def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) * (1 - (1 / math.pow(2, 2)))

    total_distance = 0
    current_height = start_height
    for i in range(num_bounces-1):
        total_distance += current_height * 2
        current_height *= bounciness_index
    total_distance += first_bounce_height * 2 + current_height * 2

    return str(round(total_distance, 5))


print(bouncing_balls())