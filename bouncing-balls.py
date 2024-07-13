def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = (first_bounce_height / start_height)

    total_distance = 0
    prev_height = start_height
    for _ in range(num_bounces):
        height = prev_height * (2 ** (-1))
        bounce_height = (prev_height + height) / 2
        total_distance += 2 * abs(bounce_height - prev_height)
        prev_height = bounce_height

    print("The total distance traveled is: ", round(total_distance, 2))