def bouncing_balls():
    start_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter height after the first bounce: "))
    num_bounces = int(input("Enter number of bounces: "))

    bounciness_index = (1 + (-1) ** ((num_bounces % 2)) * 0.5) ** num_bounces
    total_distance = 0

    for bounce_number in range(num_bounces):
        current_height = abs(start_height * ((1 + (-1) ** ((bounce_number % 2)) * 0.5) ** (bounce_number + 1)))
        if bounce_number < num_bounces - 1:
            total_distance += 2 * current_height
        else:
            total_distance += 2 * current_height

    print(f"Total distance: {total_distance}")
    print(f"Bounciness index: {bounciness_index}")

bouncing_balls()