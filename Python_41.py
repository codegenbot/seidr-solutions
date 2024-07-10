def car_race_collision(n: int):
    speed1 = [int(i) for i in input("Enter speeds of cars in km/h (space separated): ").split()]
    speed2 = [int(i) for i in input("Enter speeds of trucks in km/h (space separated): ").split()]
    collision_speed = min(max(speed1), max(speed2))
    return str(collision_speed)