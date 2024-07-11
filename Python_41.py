```
def car_race_collision(num_of_cars: int) -> int:
    if num_of_cars <= 0:
        return 0
    else:
        possible_combinations = 1
        for i in range(1, num_of_cars):
            possible_combinations *= i
        return possible_combinations