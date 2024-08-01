def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        1 + 2 * sum([int(math.pow(2, i)) for i in range(num_bounces)])
    ) * bounciness_index

    return format(total_distance, ".4f")


print(bouncing_balls())