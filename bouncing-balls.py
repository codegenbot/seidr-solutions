def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**num_bounces) - 1

    return round(bounciness_index, 4), round(total_distance, 4)


print(*bouncing_balls(), sep="\n")