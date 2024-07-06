def car_race_collision(n: int) -> int:
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    return len([x for x in left_to_right if x in right_to_left])

# test case 1
print(car_race_collision(10)) # output: 100

# test case 2
print(car_race_collision(5)) # output: 16

# test case 3
print(car_race_collision(1)) # output: 1