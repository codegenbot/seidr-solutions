```
def bouncing_balls():
    h = float(input())
    b = float(input())
    i = (0.5 ** 1) / (h / b)

    n = int(input())
    total_distance = 0
    for _ in range(n):
        distance_traveled = 2 * b
        total_distance += distance_traveled
        b *= i

    return total_distance