start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
distance_per_bounce = start_height * (1 - 0.5**2) / 0.5

total_distance = distance_per_bounce * num_bounces * 2 + start_height
print("{:.6f}".format(total_distance))