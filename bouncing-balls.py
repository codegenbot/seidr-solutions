```Python
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    previous_height = start_height

    for _ in range(num_bounces):
        total_distance += 2 * previous_height
        previous_height *= bounciness_index

    return "{:.6f}".format(total_distance)


print(bouncing_balls())