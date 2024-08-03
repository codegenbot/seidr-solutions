def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / s_height
    total_distance = 0.0

    for _ in range(num_bounces):
        total_distance += 2 * (s_height + first_bounce_height)
        s_height, first_bounce_height = first_bounce_height, s_height * bounciness_index

    return "{:.6f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())