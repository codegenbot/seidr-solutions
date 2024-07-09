def car_race_collision():
    (*speeds,) = map(
        int, input("Enter speed of each car, separated by spaces: ").split()
    )
    (*cars,) = map(int, input("Enter number of cars, separated by spaces: ").split())
    return sum(s1 < s2 for s1, s2 in zip(cars[:-1], cars[1:]))