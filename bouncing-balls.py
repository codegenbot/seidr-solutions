start_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / start_height
total_distance = start_height + (2 * (1 - bounciness_index**num_bounces) * start_height)

print(total_distance)