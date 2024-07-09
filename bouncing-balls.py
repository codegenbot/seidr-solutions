```
def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = (h2 / h1) ** 0.5
    total_distance = 2 * ((bounciness_index + 1) ** (bounces + 1) - 1)

    print(format(total_distance, ".4f"))


bouncing_balls()