```python
def car_race_collision(n: int):
    return n * (n - 1) if n > 1 else 0

n = int(input("Enter a number: "))
print(car_race_collision(n))