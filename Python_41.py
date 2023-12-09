def car_race_collision(n):
    # Initialize a dictionary to store the number of collisions for each pair of cars
    collisions = {}
    for i in range(n):
        for j in range(i+1, n):
            # Check if the two cars are moving in opposite directions
            if (i < j and j < n-i) or (i > j and j > n-i):
                collisions[(i, j)] = 1
    return sum(collisions.values())