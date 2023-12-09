
def car_race_collision(n: int) -> int:
    left_to_right = set()
    right_to_left = set()
    collisions = 0
    for i in range(1, n+1):
        if i % 2 == 0:
            left_to_right.add(i)
        else:
            right_to_left.add(i)
    
    for car in left_to_right:
        if car // 2 in right_to_left:
            collisions += 1
    return collisions
