
def car_race_collision(n: int):
    left_to_right = 0
    right_to_left = n - 1
    collisions = 0

    while left_to_right < n and right_to_left >= 0:
        if left_to_right < right_to_left:
            left_to_right += 1
        else:
            right_to_left -= 1
        collisions += 1

    return collisions

def test_car_race_collision():
    assert car_race_collision(10) == 100
```