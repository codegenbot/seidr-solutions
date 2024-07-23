def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())

    total_distance = 0
    height = s_height

    for _ in range(num_bounces):
        height *= bounciness_index * 2
        total_distance += height - math.sqrt(height**2 - (s_height * 2) ** 2)

    return format(total_distance, ".4f")


print(bouncing_balls())