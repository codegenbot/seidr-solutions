def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    bounces = int(input())

    distance = 0
    height = hf

    while bounces > 0:
        distance += 2 * (height - 1) + 1
        height *= bounciness_index
        bounces -= 1

    return format(distance, ".4f")


print(bouncing_balls())