def car_race_collision(tracks):
    if not isinstance(tracks, int) or tracks < 1:
        return "Invalid input! Please provide a positive integer."
    
    collisions = 0
    for i in range(1, tracks+1):  
        if (i + 1) % 3 == 0:
            collisions += 1
    return collisions