def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = (h1 + h2) * (2**num_bounces - 1)

    return str(total_distance)


print(bouncing_balls())