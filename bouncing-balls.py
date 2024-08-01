def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    n = int(input())
    distance = 2 * (1 - math.pow(bi, -n))
    return str(round(distance, 6))


print(bouncing_balls())