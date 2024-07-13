```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = abs(start_height - first_bounce_height) * 2
    height = first_bounce_height / start_height
    for _ in range(num_bounces):
        total_distance += abs(height - start_height) * 4
        height *= bounciness_index

    return str(bounciness_index) + "\n" + str(total_distance)

print(bouncing_balls())