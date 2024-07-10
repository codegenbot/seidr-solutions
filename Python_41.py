```
def car_race_collision():
    n = int(input("Enter number of cars: "))
    positions = list(map(int, input("Enter space-separated positions of cars (from left to right): ").split()))
    positions.sort()
    collisions = 0
    for i in range(len(positions) - 1):
        collisions += positions[i+1] - positions[i] - 1
    return collisions