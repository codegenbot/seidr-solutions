def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (2 ** (1 / 2) - 1) * bounciness_index
        bounciness_index *= 2 ** (1 / 2) - 1

    return str(total_distance + start_height)


print(bouncing_balls())