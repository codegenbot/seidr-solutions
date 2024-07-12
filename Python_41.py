```
car_race_collision = int(input("Enter car race collision: "))
def check():
    if car_race_collision > 5:
        print("Collision is severe")
    elif car_race_collision == 5:
        print("Collision is moderate")
    else:
        print("No collision")
check()