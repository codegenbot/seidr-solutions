def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1

    total_distance = 0
    height = h2
    for _ in range(bounces):
        if height > 0:
            total_distance += 2 * math.sqrt(height)
            height *= (height / h2) ** 2
        else:
            break

    return str(total_distance + bounciness_index)


print(bouncing_balls())