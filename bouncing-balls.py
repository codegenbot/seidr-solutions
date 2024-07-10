```
def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    for _ in range(int(input())):
        total_distance += (2 * h0 + hf) * bounciness_index
        h0, hf = hf, abs(hf * h0 / (2 * h0 + hf))  

    return str(round(total_distance, 4))


print(bouncing_balls())