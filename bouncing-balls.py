def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h

    n = int(input())

    distance = (2 * bi + 3) ** n / (bi - 1)

    print(distance)


bouncing_balls()