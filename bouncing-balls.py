def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height

    num_bounces = int(input())

    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            total_distance += start_height * 2
        else:
            total_distance += start_height * 2 * bounciness_index ** (i + 1)

    print("{:.3f}".format(total_distance))