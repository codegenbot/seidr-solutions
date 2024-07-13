```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = abs(start_height)
    original_height = start_height
    for _ in range(num_bounces - 1):
        original_height *= bounciness_index
        total_distance += 2 * abs(original_height)

    return str(bounciness_index) + "\n" + str(total_distance)


print(bouncing_balls())