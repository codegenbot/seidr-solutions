```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance_up = 0
    total_distance_down = 0

    for _ in range(num_bounces):
        new_start_height = start_height * bounciness_index
        total_distance_up += 2 * (start_height - new_start_height) 
        total_distance_down += 2 * (new_start_height - start_height)
        start_height = new_start_height

    return round(total_distance_up + total_distance_down, 4)


print(bouncing_balls())