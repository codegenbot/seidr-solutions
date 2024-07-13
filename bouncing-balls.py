```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += (2 * current_height) ** 0.5
        current_height *= 0.8

    return str(round(total_distance, 4))


print(bouncing_balls())