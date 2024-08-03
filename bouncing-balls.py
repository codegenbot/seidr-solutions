def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    r = hf / h0

    distance = 0
    height = hf
    for _ in range(int(input())):
        height *= r * (2 - r)
        distance += height

    return f"{distance:.6f}"


print(bouncing_balls())