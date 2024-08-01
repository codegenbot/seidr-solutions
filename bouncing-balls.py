def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / s_height
    num_bounces = int(input())

    distance = 0
    for _ in range(num_bounces):
        distance += s_height * (1 - math.pow(1 - bounciness_index, 2))
        s_height *= bounciness_index

    return str(round(distance, 5))


print(bouncing_balls())