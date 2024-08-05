def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.5 * (2**num_bounces) - 1

    return round(bounciness_index, 3), round(total_distance, 6)


print(*bouncing_balls(), sep="\n")