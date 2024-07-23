```
def car_race_collision(cars):
    return sum([i*(cars-i) for i in range(1,cars+1)])