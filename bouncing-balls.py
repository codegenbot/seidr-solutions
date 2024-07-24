def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        starting_height = first_bounce_height
        first_bounce_height *= bounciness_index
        total_distance += starting_height

    return str(int(total_distance + 1))


print(bouncing_balls())