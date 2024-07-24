def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    num_bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (s_height + f_height) * 2
        s_height, f_height = f_height, f_height - (f_height - s_height)

    return round(total_distance, 3)


print(bouncing_balls())