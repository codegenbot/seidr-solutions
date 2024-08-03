def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (num_bounces * 2) + ((bounciness_index - 1) ** 2)

    return "{:.6f}\n{}".format(total_distance, num_bounces)


print(bouncing_balls())