def bouncing_balls():
    starting_height = float(input())
    bounce_height = float(input())
    num_bounces = int(input())

    total_distance = starting_height

    for _ in range(num_bounces-1):
        total_distance += bounce_height * 2
        bounce_height *= bounce_height / starting_height

    print(total_distance)


bouncing_balls()