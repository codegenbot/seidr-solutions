def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for _ in range(num_bounces + 1):
        total_distance += 2 * height
        if height > 0:
            height *= bounciness_index
        else:
            break

    return str(total_distance)