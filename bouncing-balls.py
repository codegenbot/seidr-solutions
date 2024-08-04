def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for i in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (i + 1) - (
            1 + bounciness_index
        ) ** i

    return round(total_distance, 5)


print(bouncing_balls())