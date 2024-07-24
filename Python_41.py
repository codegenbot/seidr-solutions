def car_race_collision(n: int):
    speed1 = int(input("Enter the speed of the first car: "))
    speed2 = int(input("Enter the speed of the second car: "))

    position1 = int(input("Enter the initial position of the first car: "))
    position2 = int(input("Enter the initial position of the second car: "))

    while True:
        position1 += speed1
        position2 += speed2
        if position1 == position2:
            return True