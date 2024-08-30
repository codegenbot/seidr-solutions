def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / h1
    total_distance = (h1 + h2) * ((1 - bounciness_index) ** n) / (1 - bounciness_index)

    print(format(total_distance, ".4f"))


bouncing_balls()