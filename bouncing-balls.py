```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for _ in range(num_bounces):
        distance_per_bounce = 2 * start_height + 2 * first_bounce_height 
        total_distance += distance_per_bounce
        first_bounce_height *= 0.8
        start_height *= 0.8

    return format(total_distance, ".4f")