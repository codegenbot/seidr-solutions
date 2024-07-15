def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        b /= i
        distance_traveled = h + b
        total_distance += distance_traveled
        b = round(b * i)

    return total_distance