def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    n = int(input())
    total_distance = (2**0.5) * bi * ((1 + bi) ** n - 1)
    return round(total_distance, 6)


print(bouncing_balls())