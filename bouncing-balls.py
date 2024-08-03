def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bi = hf / h0

    total_distance = 0
    for i in range(1, b + 1):
        total_distance += math.sqrt(hf * h0) * (bi**i)

    print(bi)
    print(format(total_distance, ".6g"))


bouncing_balls()