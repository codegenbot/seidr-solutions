def car_race_collision(n: int):
    speed1 = int(input("Enter the speed of the first car: "))
    speed2 = int(input("Enter the speed of the second car: "))

    position1 = 0
    position2 = 0

    while True:
        if position1 == position2:
            return True
        position1 += speed1
        position2 += speed2