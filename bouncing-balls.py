```
def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (bounciness_index - 1) * (s_height + f_height)
        s_height, f_height = f_height, (f_height * bounciness_index)

    return round(total_distance, 5)

print(round(bouncing_balls(), 5))