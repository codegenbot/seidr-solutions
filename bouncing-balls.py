def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())
    total_distance = (1 + 2**0.5) * bounciness_index * (2**num_bounces - 1)
    return "{:.6f}\n{}".format(bounciness_index, total_distance)


print(bouncing_balls())