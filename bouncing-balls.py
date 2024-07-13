```
import math

def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = first_bounce_height / start_height

    total_distance = 2 * start_height * (math.pow(2, num_bounces) - 1) * bounciness_index
    print(total_distance)

bouncing_balls()