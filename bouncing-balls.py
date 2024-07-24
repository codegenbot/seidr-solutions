def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * (1 + bounciness_index)

    return str(round(total_distance, 4))


print(bouncing_balls())