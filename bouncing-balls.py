```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = (2 / 3) * start_height
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height
    for i in range(num_bounces):
        total_distance += 2 * (current_height - start_height)
        current_height = (2 / 3) * current_height

    print(total_distance)

bouncing_balls()