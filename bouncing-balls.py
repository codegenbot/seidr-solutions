def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):
        height *= bounciness_index
        total_distance += 2 * height

    return round(total_distance, 4)


print(bouncing_balls())