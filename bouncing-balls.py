```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        distance = 2 * (start_height + first_bounce_height)
        total_distance += distance
        start_height = first_bounce_height
        first_bounce_height *= bounciness_index

    print(total_distance)


bouncing_balls()