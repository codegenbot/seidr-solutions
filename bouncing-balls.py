def bouncing_balls():
    h0 = float(input())
    hf1 = float(input())
    bounces = int(input())

    bounciness_index = hf1 / h0
    distance = 2 * (1 + bounciness_index) ** bounces - 1

    return format(distance, ".4f")


print(bouncing_balls())