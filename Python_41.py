while True:
    try:
        n = int(input("Enter the number of cars: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(car_race_collision(n))