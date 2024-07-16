def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height

    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (_ * 2)

    return "{:.6f}\n{}".format(
        total_distance,
        int(math.ceil(math.log2((total_distance) ** (1 / (bounciness_index + 1))))),
    )