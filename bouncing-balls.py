```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += 2 * current_height * bounciness_index
        current_height *= bounciness_index

    return format(float(total_distance), '.6f')