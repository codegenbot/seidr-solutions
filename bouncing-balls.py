def calculate_distance():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += (2**0.5) * (1 - (bounciness_index ** (-2)))

    return round(total_distance, 4)


print(calculate_distance())