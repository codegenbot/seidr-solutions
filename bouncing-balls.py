def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for i in range(num_bounces):
        bounciness_index *= 2
        total_distance += (start_height * bounciness_index) ** 2

    print(format(total_distance, ".4f"))