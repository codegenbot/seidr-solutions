def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        distance_to_collide = (a1 + a2 - abs(a1 - a2)) / 2
        total_distance = min(a1, a2) * distance_to_collide
        return total_distance