def bouncing_balls():
    h = float(input())
    bh = float(input())
    bi = bh / h

    n = int(input())
    total_distance = 0
    height = bh
    for i in range(n):
        total_distance += 2 * math.sqrt(2 * abs(height - h))
        height *= bi

    return str(round(total_distance, 4))


print(bouncing_balls())