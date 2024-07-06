
def car_race_collision(n: int):
    # Initialize a variable to keep track of the number of collisions
    num_collisions = 0

    # Loop through each pair of cars moving in opposite directions
    for i in range(n):
        # Check if the left-moving car is at the same position as the right-moving car
        if (i - n) == 0:
            num_collisions += 1

    return num_collisions