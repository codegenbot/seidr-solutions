def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height
    for _ in range(bounces):
        distance = height * (1 - bounciness_index)
        total_distance += 2 * distance
        height *= bounciness_index

    return str(total_distance)


print(bouncing_balls())