```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        distance_at_bounce = 2 * current_height
        current_height *= bounciness_index
        total_distance += distance_at_bounce

    return str(round(total_distance, 2))