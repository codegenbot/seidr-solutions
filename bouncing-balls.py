def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / h1
    total_distance = (2**0.5) * ((h1 + h2) ** 2) * (1 - (bounciness_index**2)) ** (-n)

    return round(total_distance, 5)


print(bouncing_balls())