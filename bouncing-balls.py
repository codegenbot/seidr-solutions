def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0
    previous_height = starting_height

    for _ in range(num_bounces):
        total_distance += (previous_height - current_height * (1 - bounciness_index))
        current_height *= bounciness_index
        previous_height = current_height

    return "{:.6f}\n".format(total_distance)

print(bouncing_balls())