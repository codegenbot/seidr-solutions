```
def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 2 * abs(starting_height) + 4
    current_height = first_bounce_height

    for _ in range(num_bounces):
        if current_height > 0:
            total_distance += 2 * abs(current_height)
            current_height *= bounciness_index

    while current_height > 0.1:  # assume 0.1 is the precision
        total_distance += 2 * abs(current_height)
        current_height *= bounciness_index

    print(total_distance)