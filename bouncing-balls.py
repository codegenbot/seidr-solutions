def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0
    bounces = int(input())
    distance = 2 * (1 - math.pow(hf / h0, 2)) ** bounces
    print(f"{distance:.6f}")


bouncing_balls()