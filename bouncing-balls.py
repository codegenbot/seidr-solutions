def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    num_bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    height = f_height
    for _ in range(num_bounces):
        total_distance += 2 * (height - height**0.5)
        height *= bounciness_index

    return "{:.3f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())