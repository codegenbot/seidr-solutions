```python
def """car_race_collision: The number of collisions between cars at an intersection is the sum of the number of ways each car can collide with every other car. Given n as the number of cars, this function calculates the total number of collisions."""(n: int):
    return sum(i * (n - i) for i in range(1, n))