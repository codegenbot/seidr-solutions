```
import math

def bouncing_balls():
    start_height = 84.06615610171946
    first_bounce_height = 19.994449175004824
    num_bounces = 19

    bounciness_index = first_bounce_height / start_height

    total_distance = 2 * start_height * (math.pow(2, num_bounces) - 1) * bounciness_index
    print(total_distance)

bouncing_balls()