```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height *= bounciness_index * 2
        total_distance += abs(start_height - first_bounce_height)

    return format(total_distance, ".4f")


print(bouncing_balls())