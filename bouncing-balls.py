```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 2 * start_height
    height = start_height
    for _ in range(num_bounces):
        total_distance += 2 * height + 2 * height - 2 * (height * bounciness_index)
        height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()