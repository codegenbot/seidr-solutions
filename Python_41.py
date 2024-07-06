
def car_race_collision(n: int) -> int:
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    return len([x for x in left_to_right if x in right_to_left])
```