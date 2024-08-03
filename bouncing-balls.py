def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / start_height

    total_distance = 0
    for i in range(num_bounces):
        start_height = height_after_first_bounce
        height_after_first_bounce *= bounciness_index
        total_distance += start_height

    return "{:.6f}\n{:d}".format(total_distance, num_bounces)


print(bouncing_balls())