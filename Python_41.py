def car_race_collision(n: int):
    if n < 1:
        return "Invalid input. Please enter a positive integer."
    elif n == 1:
        return "There will be no collisions for 1 car."
    else:
        return n * (n - 1) // 2