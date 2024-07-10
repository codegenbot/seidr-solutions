```
def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input("Enter the number of bounces: "))

    total_distance_up = 0
    total_distance_down = 2 * (start_height - first_bounce_height) 

    for _ in range(num_bounces):
        new_start_height = start_height * bounciness_index
        total_distance_down += 2 * (start_height - new_start_height)
        total_distance_up += 2 * (new_start_height - start_height)
        start_height = new_start_height

    return round(total_distance_up + total_distance_down, 4)


print(bouncing_balls())