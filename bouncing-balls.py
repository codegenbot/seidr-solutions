def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())
    total_distance = 0
    for i in range(num_bounces):
        bounciness_index *= 0.5
        total_distance += (2**0.5) * bounciness_index
    return "{:.6f}\n{}".format(bounciness_index, total_distance)


print(bouncing_balls())