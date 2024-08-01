def bouncing_balls():
    h = float(input("Enter the starting height: "))
    bh = float(input("Enter the height after first bounce: "))
    bounciness_index = bh / h
    num_bounces = int(input("Enter the number of bounces: "))
    total_distance = (2 * (1 - math.pow(bounciness_index, -num_bounces))) * h
    print(f"Total distance traveled: {total_distance:.4f}")


bouncing_balls()