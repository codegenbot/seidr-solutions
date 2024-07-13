def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bi = hf / h0
    distance = 2 * (1 - math.pow(bi, 2)) ** (b + 1) / (1 - math.pow(bi, 2))

    return round(distance, 5)


print(round(bouncing_balls(), 5))