def calculate_total_distance():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0.0
    current_height = starting_height

    for _ in range(num_bounces):
        total_distance += (current_height + current_height) * (1 - bounciness_index)
        current_height *= bounciness_index

    print(f"{total_distance:.3f}")


calculate_total_distance()