def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    n = int(input())
    total_distance = 2 * (h0 + (h0 - hf) * (2**n - 1) // (2**n))
    return round(total_distance, 6)


print(bouncing_balls())