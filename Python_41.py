def car_race_collision(n: int):
    num_cars = n
    counter = 0
    for i in range(num_cars):
        for j in range(i+1, num_cars):
            if (i == j) or (i + j) % 2 == 0:
                counter += 1
    return counter