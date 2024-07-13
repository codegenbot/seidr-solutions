def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = (2 * sum([start_height for _ in range(num_bounces)]) + 
                      2 * first_bounce_height) * bounciness_index
    print(total_distance)

bouncing_balls()