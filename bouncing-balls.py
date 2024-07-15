```
def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = 2 * abs(b - h)
        total_distance += distance_traveled
        h, b = b, (b - h) * i
    return total_distance