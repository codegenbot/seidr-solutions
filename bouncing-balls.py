def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    n = int(input())
    total_distance = 2 * (bi**n - 1) / (bi - 1)
    print(format(total_distance, ".4f"))


bouncing_balls()