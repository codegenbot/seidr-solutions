def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    height = hf
    for _ in range(int(input())):
        distance += 2 * math.sqrt(height)
        height *= bounciness_index

    return str(round(distance, 4))


print(bouncing_balls())