```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0

    for i in range(num_bounces):
        start_height *= 2
        total_distance += abs(start_height - first_bounce_height) / bounciness_index

    print(total_distance)


bouncing_balls()