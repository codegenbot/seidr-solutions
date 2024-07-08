start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
distance_per_bounce = first_bounce_height * (1 - 0.5**2) / (1 - 0.5**2) * bounciness_index

total_distance = distance_per_bounce * num_bounces + start_height

print("{:.6f}".format(total_distance))