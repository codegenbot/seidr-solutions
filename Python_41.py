def car_race_collision():
    *speed, = map(int, input("Enter speed of the cars: ").split())
    *car, = map(int, input("Enter number of cars: ").split())
    return sum(i*(car-i+1)//2 for i in range(1, car+1)) if len(set(car)) == 1 else -1