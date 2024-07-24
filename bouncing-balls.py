def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / s_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (s_height + first_bounce_height) * 2
        s_height, first_bounce_height = first_bounce_height, s_height * bounciness_index

    return str(round(total_distance, 4))


print(bouncing_balls())