def car_race_collision(n):
    left_to_right = 0
    right_to_left = n - 1
    collisions = {}
    while left_to_right < n and right_to_left >= 0:
        if left_to_right == right_to_left:
            collisions[(left_to_right, right_to_left)] = 1
            left_to_right += 1
            right_to_left -= 1
        elif left_to_right < right_to_left:
            left_to_right += 1
        else:
            right_to_left -= 1
    return len(collisions)

# test cases
assert car_race_collision(0) == 0
assert car_race_collision(1) == 0
assert car_race_collision(2) == 1
assert car_race_collision(3) == 3
assert car_race_collision(4) == 6
assert car_race_collision(5) == 10
assert car_race_collision(6) == 15
assert car_race_collision(7) == 21
assert car_race_collision(8) == 28
assert car_race_collision(9) == 36
assert car_race_collision(10) == 45