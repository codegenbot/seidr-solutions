def bouncing_balls():
    start_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter height after the first bounce: "))
    num_bounces = int(input("Enter number of bounces: "))

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        if _ < num_bounces - 1:
            print(f"Ball is bouncing at height {current_height}")
        bounce_height = 0.5 * current_height
        current_height = abs(current_height - bounce_height)
        total_distance += 4 * current_height

    print(f"Total distance: {total_distance}")


bouncing_balls()