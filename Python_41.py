def car_race_collision(n: int):
    if n < 1:
        return "Please enter a positive integer."
    elif n == 1:
        return "No collisions will occur because there is only one car."
    else:
        return n * (n - 1) // 2