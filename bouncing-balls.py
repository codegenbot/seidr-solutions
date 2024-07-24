def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    distance = 0
    height = f_height
    for _ in range(int(input())):
        distance += 2 * math.sqrt(height)
        height *= bounciness_index

    print(f"{distance:.4f}")


bouncing_balls()