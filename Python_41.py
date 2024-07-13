def car_race_collision(n):
    if n < 3:
        return "No collision"
    elif n % 2 == 0:
        return 100
    else:
        return str(n)