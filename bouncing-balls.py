```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height

    for _ in range(num_bounces):
        total_distance += 2 * height
        height *= bounciness_index
        if height > 1e-5: 
            total_distance += 2 * height
        else:
            break

    return round(total_distance, 4)


print(bouncing_balls())