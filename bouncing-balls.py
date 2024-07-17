def bouncing_ball(height_first_bounce, starting_height):
    bounciness_index = height_first_bounce / starting_height
    return bounciness_index


def total_distance(bounces, bounciness_index):
    return 1 + bounciness_index ** (2 * bounces)


height_first_bounce = float(input())
starting_height = float(input())
num_bounces = int(input())

bounciness_index = bouncing_ball(height_first_bounce, starting_height)
total_dist = total_distance(num_bounces, bounciness_index)

print(format(total_dist, ".4f"))