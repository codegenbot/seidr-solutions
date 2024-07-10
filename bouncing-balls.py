def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0.0
    for _ in range(num_bounces):
        first_bounce_height *= bounciness_index
        total_distance += 2 * first_bounce_height

    return "{:.6f}".format(total_distance)


print(bouncing_balls())