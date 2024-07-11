def car_race_collision(n: int):
    track_length = n
    total_collisions = 0
    for i in range(1, track_length+1):
        collisions_on_track = min(i, track_length-i)
        total_collisions += collisions_on_track
    return total_collisions