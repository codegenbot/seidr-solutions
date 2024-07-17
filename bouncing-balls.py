def bouncing_balls():
    h = float(input())
    hb = float(input())
    b_index = hb / h

    n = int(input())
    total_distance = (
        (2**0.5) * (1 - (h / hb)) * ((hb ** (n + 1)) - (h ** (n + 1))) / (hb ** (n + 1))
    )

    print(b_index)
    print(round(total_distance, 4))


bouncing_balls()