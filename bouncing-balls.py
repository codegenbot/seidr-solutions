```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * (start_height + first_bounce_height)
    for i in range(1, num_bounces):
        height_diff = first_bounce_height / bounciness_index
        total_distance += 4 * height_diff
        first_bounce_height = height_diff

    print(total_distance)

bouncing_balls()