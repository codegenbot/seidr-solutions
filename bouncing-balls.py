def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    num_bounces = int(input())

    bounciness_index = f_height / s_height
    total_distance = (2 * (1 + bounciness_index) ** num_bounces - 1) / (
        bounciness_index**2
    )

    return "{:.6f}".format(total_distance)


print(bouncing_balls())