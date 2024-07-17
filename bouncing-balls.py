def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        1 + 2 * sum([int(2**i) for i in range(num_bounces)])
    ) * bounciness_index

    return str(total_distance)


print(bouncing_balls())