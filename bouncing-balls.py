def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height *= bounciness_index
        total_distance += start_height

    return str(total_distance)


print(bouncing_balls())