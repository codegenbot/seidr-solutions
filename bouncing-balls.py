def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        total_distance += (start_height + start_height * bounciness_index) / (
            2 ** (i + 1)
        )

    return round(total_distance, 4)


print(bouncing_balls())