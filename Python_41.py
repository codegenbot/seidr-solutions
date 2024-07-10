def car_race_collision(speeds1: list, speeds2: list):
    total_collisions = 0
    for speed1 in speeds1:
        for speed2 in speeds2:
            if speed1 > speed2 and speed1 + speed2 <= 150:
                total_collisions += 1
    return total_collisions
    print("Total collisions:", total_collisions)