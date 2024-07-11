```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    for i in range(1, bounces+1):
        total_distance += (h1 * 2) + (
            ((bounciness_index**i)**2 - 1) / ((bounciness_index**i)**2 + 1)
        ) * 4 * (1 - (bounciness_index**i)**2)

    print(f"{total_distance:.6f}")


bouncing_balls()