def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    num_bounces = int(input())

    total_distance = 0
    height = f_height
    while num_bounces > 0:
        total_distance += height
        height *= bounciness_index
        num_bounces -= 1

    return format(total_distance, ".4f")


print(bouncing_balls())