def bouncing_balls():
    height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / height
    num_bounces = int(input())

    total_distance = 0
    current_height = height

    for _ in range(num_bounces):
        total_distance += 2 * (current_height + current_height * bounciness_index)
        current_height *= bounciness_index

    return round(total_distance, 4)


print(bouncing_balls())