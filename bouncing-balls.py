def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    height = hf
    for _ in range(int(input())):
        distance += 2 * math.sqrt(2 * height)
        height *= bounciness_index
    return round(distance, 6)


print(bouncing_balls())