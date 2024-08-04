def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    distance = bi * (2 ** (n - 1) - 1)
    print(f"{distance:.4f}")


bouncing_balls()