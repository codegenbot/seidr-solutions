def car_race_collision():
    task_description = (
        "Return the number of possible car race collisions given the number of cars."
    )
    n = int(input("Enter the number of cars: "))
    return n * (n - 1) // 2