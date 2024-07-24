def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = 0.5 * (h1 + h2) * math.pow(bounciness_index, bounces)

    return round(total_distance, 6)


print(round(bouncing_balls(), 6))