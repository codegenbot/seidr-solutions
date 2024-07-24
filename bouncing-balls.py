def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bi = h2 / h1
    distance = 0

    for _ in range(bounces):
        distance += 2 * (h1 + h2)
        temp = h2
        h2 = h1
        h1 = temp

    return str(round(h1 * bi, 4)) if bounces > 0 else "0.0000"


print(bouncing_balls())