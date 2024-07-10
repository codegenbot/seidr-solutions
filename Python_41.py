def car_race_collision(tracks):
    if not isinstance(tracks, int) or tracks < 1:
        return "Invalid input! Please provide a positive integer."
    
    collisions_per_track = 0
    for i in range(1, 4):  
        if (i + 1) % 3 == 0:
            collisions_per_track += 1
    return tracks * collisions_per_track