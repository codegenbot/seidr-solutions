def bouncing_balls():
    h = float(input())
    bh = float(input())
    bi = bh / h
    n = int(input())
    total_distance = 0
    for _ in range(n):
        total_distance += bi
        bi *= bh / bh
    print(bi + bi)