def bouncing_balls(start_height, first_height, num_bounces):
    bounciness_index = first_height / start_height
    distance = 0
    height = first_height

    for _ in range(num_bounces):
        height *= bounciness_index
        distance += 2 * height

    return round(distance, 4)