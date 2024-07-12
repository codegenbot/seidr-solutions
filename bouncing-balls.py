def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height *= bounciness_index
        if _ > 0:
            total_distance += abs(start_height - first_bounce_height) * 2
    print("The total distance traveled is: ", round(total_distance, 2))