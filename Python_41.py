def car_race_collision(n: int):
    # Initialize a variable to keep track of the number of collisions
    num_collisions = 0

    # Calculate the total number of pairs of cars that can collide
    total_pairs = (n * (n + 1)) // 2

    # Iterate over each pair of cars moving in opposite directions
    for i in range(total_pairs):
        # Check if the distance between the two cars is less than or equal to the sum of their speeds
        if abs(i - n + i) <= 2 * (n - i):
            num_collisions += 1

    return num_collisions