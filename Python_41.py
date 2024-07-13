```
def car_race_collision(n):
    if n < 3:
        return "No collision"
    elif n % 2 == 0:
        return f"No collision ({n} cars)"
    else:
        return f"Collision ({n-1} cars)"