```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    distance = 0
    for _ in range(num_bounces):
        distance += 2 * (h2 - h1)
        h1, h2 = h2, max(0, h2 * bounciness_index)
    return str(distance + 2 * (h2 - h1))


print(bouncing_balls())