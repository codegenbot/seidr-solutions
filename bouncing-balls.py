```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (2 * first_bounce_height) / start_height
    total_distance = 0
    for _ in range(num_bounces):
        start_height = 2 * start_height - first_bounce_height
        total_distance += start_height

    print(total_distance)


bouncing_balls()