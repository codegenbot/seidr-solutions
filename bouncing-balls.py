def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            height = first_bounce_height
        else:
            height = start_height * (bounciness_index ** (i + 1))
        total_distance += 2 * abs(height - start_height)

    return round(total_distance, 3)


print(bouncing_balls())