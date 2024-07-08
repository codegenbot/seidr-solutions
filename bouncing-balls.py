```
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height * ((1 - bounciness_index) ** (num_bounces + 1)) / (1 - bounciness_index)

print("{:.6f}".format(total_distance))