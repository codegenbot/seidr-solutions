def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.5 * (1 + bounciness_index) ** (2 * num_bounces)

    return "{:.3f}\n".format(total_distance)


print(bouncing_balls())