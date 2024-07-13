def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += abs(current_height - start_height)
        current_height *= 2 ** (-bounciness_index + 1)

    print(total_distance)