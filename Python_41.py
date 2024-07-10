def car_race_collision():
    n = int(input("Enter the number of tracks: "))
    collisions = 0
    for i in range(n):
        for j in range(i+1, n):
            if (i+j) % 3 == 0:
                collisions += 1
    return collisions