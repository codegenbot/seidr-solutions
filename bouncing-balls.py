def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    n = int(input())

    bounciness_index = hf / h0
    distance = 0

    for i in range(n):
        distance += 2 * h0 * (1 + bounciness_index) ** (i + 1)

    print(f"{distance:.4f}")


bouncing_balls()