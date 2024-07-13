def bouncing_balls():
    starting_height = float(input())
    bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = bounce_height / starting_height
    total_distance = starting_height + (
        2 * bounce_height * sum([bounciness_index**i for i in range(num_bounces)])
    )

    print(total_distance)


bouncing_balls()