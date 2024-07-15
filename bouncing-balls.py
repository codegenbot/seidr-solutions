def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = (h - b) * 2
        total_distance += distance_traveled
        h, b = b, round(b * i)
        i = b / h  
    return total_distance