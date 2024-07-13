def car_race_collision(n):
    if n < 3:
        return "No collision"
    elif n % 2 == 0:
        return "Collision"
    else:
        return "No collision"