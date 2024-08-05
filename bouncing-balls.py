def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bi = hf / h0
    total_distance = (2 * bi) ** (b + 1) - 2 * bi
    print(round(total_distance, 5))


bouncing_balls()