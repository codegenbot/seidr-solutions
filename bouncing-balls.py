```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    for _ in range(n):
        total_distance += (h1 + h1 * bounciness_index) * 2
        h1 *= bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())