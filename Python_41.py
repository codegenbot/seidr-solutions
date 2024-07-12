```
car_race_collision = None

def check():
    global car_race_collision
    car_race_collision = int(input("Enter car race collision: "))
    if car_race_collision > 5:
        print("Collision is severe")
    elif car_race_collision == 5:
        print("Collision is moderate")
    else:
        print("No collision")

check()