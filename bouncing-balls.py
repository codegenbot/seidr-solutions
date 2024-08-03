def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0
    current_height = starting_height

    for _ in range(num_bounces):
        total_distance += 2 * (current_height + current_height * bounciness_index)
        current_height *= bounciness_index

    return "{:.6f}".format(total_distance)


print(bouncing_balls())