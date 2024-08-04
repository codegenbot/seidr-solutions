def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        if _ == 0:
            distance = (start_height + first_bounce_height) * 2
        else:
            distance = (
                (start_height + first_bounce_height) * 2 * bounciness_index ** (_ - 1)
            )
        total_distance += distance

    print("{:.3f}".format(total_distance))