def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        current_height = start_height * (0.5 ** (_ // 2 + 1))
        total_distance += 2 * abs(current_height) * bounciness_index
    print(total_distance)
    print(bounciness_index)

bouncing_balls()