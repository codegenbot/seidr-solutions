```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces):
        distance = 2 * current_height
        total_distance += distance
        current_height *= bounciness_index  # update the current height for next bounce

    print(total_distance)


bouncing_balls()