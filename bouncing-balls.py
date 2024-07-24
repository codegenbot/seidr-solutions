def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    r = hf / h0
    n = int(input())
    d = 2 * (1 - math.pow(r, 2**n)) / (1 + r)
    print(f"{d:.6f}")


bouncing_balls()