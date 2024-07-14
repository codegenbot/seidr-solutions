def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height

    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (start_height + height_after_first_bounce) * 2
        start_height = height_after_first_bounce
        height_after_first_bounce /= bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())