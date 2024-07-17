def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bi = hf / h0

    distance = 0
    for i in range(1, b + 1):
        distance += (h0 * 2) ** i * bi

    return format(distance, ".4f")


print(bouncing_balls())