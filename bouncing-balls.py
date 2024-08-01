def bouncing_balls():
    h = float(input())
    hb = float(input())
    b = int(input())

    index = hb / h

    distance = (2 * h + 3 * h) * index ** (b + 1) - (h * index**b)

    print("{:.3f}".format(distance))