def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 1 + 2 * sum(
        [int(bounciness_index**i) for i in range(1, num_bounces + 1)]
    )

    return "{:.6f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())