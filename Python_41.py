def car_race_collision(speed1: int, speed2: int):
    pos1 = 0
    pos2 = 0
    while True:
        pos1 += speed1
        pos2 += speed2
        if pos1 == pos2:
            return True
        elif pos2 > pos1:
            speed1 = max(speed1, speed2)
            speed2 -= speed2 - (pos2 - pos1)
        else:
            speed2 = max(speed2, speed1)
            speed1 -= speed1 - (pos2 - pos1)