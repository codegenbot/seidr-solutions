def calculate_distance():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0

    nbounces = int(input())

    distance = 0
    height = h0

    for _ in range(nbounces):
        distance += 2 * abs(height - 0)
        height *= bi

    print(format(distance, ".6f"))