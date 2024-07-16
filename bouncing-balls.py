```
def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / start_height

    total_distance = 0
    prev_height = start_height
    for _ in range(num_bounces):
        additional_distance = prev_height * (1 - (prev_height / start_height))
        total_distance += additional_distance
        prev_height *= bounciness_index

    return str(format(total_distance, ".6f"))


print(bouncing_balls())