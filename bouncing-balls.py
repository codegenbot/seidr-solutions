def bouncing_balls(start_height, height_after_first_bounce, num_bounces):
    bounciness_index = height_after_first_bounce / start_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (start_height + height_after_first_bounce) * bounciness_index
        start_height *= bounciness_index

    return round(total_distance, 5)


start_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

print(bouncing_balls(start_height, height_after_first_bounce, num_bounces))