```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height
    for _ in range(num_bounces):
        total_distance += round(2 * height, 4)
        height = round(height * bounciness_index, 10)

    return f"{total_distance:.4f}"

print(bouncing_balls())