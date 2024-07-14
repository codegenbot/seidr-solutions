def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bi = hf / h0

    distance = 0
    for _ in range(int(input())):
        height = (2 * hf + h0) / 2
        distance += abs(hf - h0)
        h0, hf = hf, height
        hf *= bi
    return str(distance)


print(bouncing_balls())