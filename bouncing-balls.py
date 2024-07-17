def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        if bounciness_index > 1:
            total_distance += 2 * (start_height + (bounciness_index - 1) * start_height)
        else:
            break

    return round(total_distance, 4)


print(bouncing_balls())