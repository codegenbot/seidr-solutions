def car_race_collision(n: int):
    # Initialize a counter for the number of collisions
    collision_count = 0

    # Loop through each pair of cars
    for i in range(n):
        # Check if the two cars are moving towards each other
        if (i % 2 == 0 and n - i >= 1) or (i % 2 == 1 and n - i <= -1):
            collision_count += 1

    return collision_count