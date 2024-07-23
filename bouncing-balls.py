```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    previous_height = start_height
    for _ in range(num_bounces):
        current_height = first_bounce_height
        first_bounce_height *= bounciness_index
        total_distance += abs(current_height - previous_height)
        previous_height = current_height

    return str(total_distance)


print(bouncing_balls())