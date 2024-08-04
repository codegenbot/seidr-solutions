def bouncing_balls():
    h = float(input())
    bh = float(input())
    b_i = bh / h
    n = int(input())
    total_distance = 2 * (1 + b_i) ** n - 2
    print(format(total_distance, ".4f"))


bouncing_balls()