def car_race_collision(n):
    cars = list(range(n))
    for i in range(3):
        if len(set([car % (i+1) for car in cars])) == 1:
            return f"Collision at {i+1}th lap"
    return "No collision"