```Python
def car_race_collision(n: int, a1: int, a2: int):
    if a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1

# Example usage
print(car_race_collision(10, 3, 4))  # Output: 36