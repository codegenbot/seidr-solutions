```python
def car_race_collision(n: int):
    """'Return the number of possible collisions in a car race.'"""
    return n * (n - 1)

n = int(input("Enter a number: "))
print(car_race_collision(n))