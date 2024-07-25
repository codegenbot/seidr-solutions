```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    distance = 0
    for i in range(1, num_bounces + 1):
        current_height = (start_height - first_bounce_height) * (0.5 ** i) + first_bounce_height
        distance += current_height

    return format(distance, ".4f")


print(bouncing_balls())