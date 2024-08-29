```
def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())
    total_distance = 0
    height = first_bounce
    for _ in range(num_bounces):
        total_distance += (height + height / bounciness_index) * 2
        height *= bounciness_index
    print(total_distance)


bouncing_balls()