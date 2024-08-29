def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = (1 + bounciness_index) ** num_bounces - 1
    print(format(total_distance, ".4f"))


bouncing_balls()