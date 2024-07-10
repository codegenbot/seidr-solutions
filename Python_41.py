```
def car_race_collision(n: int):
    if not isinstance(n, int) or n < 2:
        return "Invalid input. Please enter a positive integer greater than 1."
    total_damage = 0
    for i in range(2, n + 1): 
        total_damage += i
    return total_damage