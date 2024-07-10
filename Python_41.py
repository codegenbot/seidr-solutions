def car_race_collision(tracks):
    collisions = 0
    for i in range(int(input("Enter number of tracks: "))):
        for j in range(i+1, int(input("Enter number of tracks: ")) + 1):
            if (i+j) % 3 == 0:
                collisions += 1
    return collisions