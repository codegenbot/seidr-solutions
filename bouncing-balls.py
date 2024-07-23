def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h
    n = int(input())
    d = 2 * (h + i*h*(n-1))
    print(d)


bouncing_balls()