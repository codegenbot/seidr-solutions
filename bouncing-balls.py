def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    index = hf / h0
    n = int(input())
    distance = 2 * (index ** (n + 1) - 1) / (index - 1)
    return format(distance, ".4f")


print(bouncing_balls())