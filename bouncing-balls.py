def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += math.log(start_height) + math.log(bounciness_index)
        start_height *= bounciness_index
        if start_height < 0.001:
            break

    return f"{total_distance:.4f}"


print(bouncing_balls())