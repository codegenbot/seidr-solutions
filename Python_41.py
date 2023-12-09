def car_race_collision(n):
    left_to_right = 0
    right_to_left = n - 1
    collisions = 0
    
    if n == 1:
        return 1
    
    while left_to_right < n and right_to_left >= 0:
        if left_to_right == right_to_left:
            collisions += 1
            left_to_right += 1
            right_to_left -= 1
        elif left_to_right < right_to_left:
            left_to_right += 1
        else:
            right_to_left -= 1
    
    return collisions