def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        total_distance = 0
        for i in range(1, n+1): 
            distance_a1 = min(a1, a2) * (n - i)
            distance_a2 = max(a1, a2) * i
            if a1 <= a2:
                total_distance += distance_a1
            else:
                total_distance += distance_a2
        return total_distance