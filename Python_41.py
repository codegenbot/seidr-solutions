```Python
def car_race_collision(n: int = 0, a1: int = 0, a2: int = 0):
    if n <= 0:
        return 0
    else:
        total_distance = 0
        for i in range(1, n+1): 
            if a1 >= a2: # Car 1 is moving faster
                total_distance += a1 - (a2 * min(n, i))
            elif a2 > a1: # Car 2 is moving faster
                total_distance += a2 - (a1 * min(n, i))
        return total_distance