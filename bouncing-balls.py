def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for _ in range(bounces):
        total_distance += math.log2(bounciness_index) * 2 + 1

    return str(format(total_distance, ".4f"))


print(bouncing_balls())