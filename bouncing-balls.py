```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    total_distance = 0
    prev_height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += prev_height * 2
        prev_height /= 2

    print(total_distance)

bouncing_balls()