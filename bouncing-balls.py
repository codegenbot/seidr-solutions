def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(1, num_bounces + 1):
        total_distance += (2**0.5)**i * bounciness_index

    return str(round(total_distance, 6))


print(bouncing_balls())