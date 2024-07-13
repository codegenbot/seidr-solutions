def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    max_height = start_height + first_bounce_height
    for i in range(num_bounces):
        new_height = (
            (2**i * first_bounce_height)
            if i % 2 == 0
            else (-1 * (2 ** (i + 1) * first_bounce_height - 2 * start_height))
        )
        total_distance += abs(new_height)
        max_height = max(abs(new_height), max_height)

    return str(bounciness_index) + "\n" + str(total_distance)