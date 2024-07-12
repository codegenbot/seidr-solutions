```Python
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(num_bounces):
        new_start_height = first_bounce_height
        first_bounce_height = int(first_bounce_height * bounciness_index)
        total_distance += new_start_height + first_bounce_height
        if num_bounces > 1:
            total_distance -= (new_start_height + first_bounce_height) * 2

    print(total_distance)


bouncing_balls()