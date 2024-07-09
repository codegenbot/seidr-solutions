```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    height = start_height
    total_distance = 0

    for _ in range(num_bounces):
        bounciness_index = height / start_height
        total_distance += 2 * height
        height /= 2

    print(total_distance)

bouncing_balls()