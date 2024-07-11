```Python
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (2 * first_bounce_height) / start_height

    total_distance = 0
    for i in range(num_bounces):
        height = (2 ** (i + 1)) * start_height
        total_distance += height + height

    return "{:.6f}".format(total_distance)


print(bouncing_balls())