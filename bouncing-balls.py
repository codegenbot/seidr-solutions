```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    height_difference = start_height - first_bounce_height

    total_distance = 2 * (height_difference + 0.5) * ((start_height - first_bounce_height) / start_height) * num_bounces

    return format(total_distance, ".4f")


print(bouncing_balls())