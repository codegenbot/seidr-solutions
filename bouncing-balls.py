def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())

    total_distance = 0
    height = s_height

    for _ in range(num_bounces):
        distance = 2 * height
        total_distance += distance
        height *= bounciness_index

    return "{:.6f}\n{}".format(total_distance, num_bounces)


print(bouncing_balls())