[PYTHON]
def car_race_collision(n: int) -> int:
    return n * (n - 1) // 2
[/PYTHON]
[TESTS]
# Test case 1:
assert car_race_collision(1) == 0
# Test case 2:
assert car_race_collision(2) == 1
# Test case 3:
assert car_race_collision(3) == 3
# Test case 4:
assert car_race_collision(4) == 6
# Test case 5:
assert car_race_collision(5) == 10
[/TESTS]
