def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())
    total_distance = starting_height + (1 - bounciness_index) * sum(
        [bounciness_index**i for i in range(1, num_bounces + 1)]
    )
    return str(total_distance)


print(bouncing_balls())