def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = 2 * (b - h) + 2 * abs(b - round(b * i))
        total_distance += distance_traveled
        h, b = b, round(b * i)

    return total_distance