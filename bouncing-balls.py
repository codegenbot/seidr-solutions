def calculate_total_distance():
    start_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter height after the first bounce: "))
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(int(input("Enter number of bounces: ")) - 1):
        start_height *= bounciness_index
        total_distance += start_height
    print(f"Total distance: {total_distance:.4f}")


calculate_total_distance()