def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        0.5 * (2**num_bounces) * ((bounciness_index + 1) ** (num_bounces + 1) - 1)
    )

    return round(total_distance, 4)


print(bouncing_balls())