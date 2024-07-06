
def car_race_collision(n: int):
    # Initialize a counter for the number of collisions
    collision_count = 0

    # Iterate over each pair of cars
    for i in range(n):
        for j in range(n):
            # Check if the two cars are moving towards each other
            if (i + j) % 2 == 1:
                collision_count += 1
            elif n % 2 == 0 and i + j >= n // 2:
                collision_count += 1

    return collision_count