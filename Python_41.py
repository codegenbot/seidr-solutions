```
input_string = input("Enter car race collision: ").strip().lower()
def check():
    if input_string == "car race collision":
        car_race_collision = int(input("Enter a number: "))
        if car_race_collision > 5:
            print("Collision is severe")
        elif car_race_collision == 5:
            print("Collision is moderate")
        else:
            print("No collision")
    else:
        print("Invalid input. Please enter 'car race collision'.")

check()