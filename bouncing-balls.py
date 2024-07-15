def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    prev_height = h
    for _ in range(n):
        distance_traveled = 2 * abs(b - prev_height)
        total_distance += distance_traveled
        b = (1 - i) * prev_height
        prev_height = b

    return total_distance