    def car_race_collision(n):
        """Returns the number of possible collisions in a car race with n cars"""
        # Initialize a variable to store the number of collisions
        collisions = 0

        # Loop through each pair of cars
        for i in range(n - 1):
            # Calculate the number of remaining cars
            remaining_cars = n - (i + 1)

            # Add the number of possible collisions for this pair to the total
            collisions += min(remaining_cars, i + 1)

        return collisions