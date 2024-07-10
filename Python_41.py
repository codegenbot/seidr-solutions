```
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        total_distance = 0
        for i in range(1, n+1):
            distance_to_collide = max(0, (a2 - a1) // 2)
            if i <= distance_to_collide:
                total_distance += min(a1, a2) * i
            else:
                total_distance += min(a1, a2) * distance_to_collide + min(a1, a2) * (n-i+1)
        return total_distance