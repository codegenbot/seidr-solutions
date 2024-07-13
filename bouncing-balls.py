def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    height = hf

    for _ in range(int(input()) - 1):
        height *= bounciness_index
        distance += height * 2

    print(distance + height)