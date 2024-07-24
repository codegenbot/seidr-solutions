def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bi = hf / h0

    total_distance = (bi + 1) ** (2 * b)

    return format(total_distance, ".4f")


print(bouncing_balls())