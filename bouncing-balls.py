def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    if start_height == 0 or first_bounce_height <= start_height:
        return "Invalid input"

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        2 * (1 - math.pow(bounciness_index, bounces)) / (1 - bounciness_index)
    )

    print("{:.3f}".format(total_distance))


bouncing_balls()