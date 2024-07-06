
def car_race_collision(n: int) -> int:
    left_cars = set()
    right_cars = set()
    collisions = 0
    
    for i in range(1, n+1):
        left_car = i
        right_car = n - i + 1
        
        if left_car in right_cars:
            collisions += 1
        else:
            left_cars.add(left_car)
            
        if right_car in left_cars:
            collisions += 1
        else:
            right_cars.add(right_car)
    
    return collisions