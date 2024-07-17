def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_of_bounces = int(input())

    total_distance = 0.0
    height = first_bounce_height

    for _ in range(num_of_bounces):
        total_distance += height * 2.0
        height *= bounciness_index

    return "{:.6f}".format(total_distance)


print(bouncing_balls())