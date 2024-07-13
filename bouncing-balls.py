def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / s_height
    total_distance = 0.5 * (2**num_bounces - 1) * bounciness_index

    return "{:.6f}\n{}".format(bounciness_index, round(total_distance, 6))


print(bouncing_balls())