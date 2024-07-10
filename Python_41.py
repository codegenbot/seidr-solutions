def car_race_collision():
    tracks = int(input("Enter the number of tracks: "))
    collisions = 0
    for i in range(1, tracks+1):  
        if (i + 1) % 3 == 0:
            collisions += tracks
    return collisions

print(car_race_collision())