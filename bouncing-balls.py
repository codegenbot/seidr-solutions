def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h
    n = int(input())
    total_distance = 0
    height = hb
    while n > 0:
        total_distance += height
        height *= bounciness_index
        n -= 1
    return str(format(total_distance, ".4f"))


print(bouncing_balls())