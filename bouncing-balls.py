def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height
    num_bounces = int(input())

    total_distance = 0.0
    for i in range(num_bounces):
        if i == 0:
            total_distance += start_height * (1 + bounciness_index)
        else:
            total_distance += start_height * ((1 + bounciness_index) ** (i + 1) - 1)

    return round(total_distance, 4)


print(bouncing_balls())