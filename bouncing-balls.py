def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_of_bounces = int(input())
    total_distance = (
        (1 + 2**0.5)
        * starting_height
        * ((1 - bounciness_index) ** num_of_bounces)
        / (1 - bounciness_index)
    )
    print(format(total_distance, ".4f"))


bouncing_balls()