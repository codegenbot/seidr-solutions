def car_race_collision(n):
    # Initialize a dictionary to store the number of collisions for each pair of cars
    collisions = {}
    # Iterate over all pairs of cars
    for i in range(n):
        for j in range(i+1, n):
            # Check if the two cars are moving in opposite directions
            if (i + j) % 2 == 0:
                # If they are, increment the number of collisions for this pair
                collisions[(i, j)] = collisions.get((i, j), 0) + 1
    return sum(collisions.values())