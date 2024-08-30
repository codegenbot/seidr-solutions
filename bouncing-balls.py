def calculate_total_distance():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height
    num_bounces = int(input())

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += current_height * 2
        current_height *= bounciness_index

    print(total_distance + start_height)