```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        max_height = (1 + bounciness_index) ** (2 * (_+1))
        distance = 2 * (_+1)
        total_distance += distance

    return str(round(total_distance, 4))


print(bouncing_balls())