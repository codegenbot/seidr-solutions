def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounces = int(input())

    bi = hf / h0

    total_distance = 2 * (1 - math.pow(bi, -bounces)) / (1 + bi)

    print(f"{total_distance:.4f}")


bouncing_balls()