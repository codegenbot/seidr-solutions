def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = (h1 + h2) * (1 - 0.5 ** (num_bounces + 1)) / (1 - 0.5**2)
    return round(total_distance, 4)


print(bouncing_balls())