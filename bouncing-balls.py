```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for i in range(num_bounces):
        total_distance += 2 * (bounciness_index ** (i + 1))

    return format(total_distance, ".4f")


print(bouncing_balls())