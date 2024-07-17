starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

for _ in range(num_bounces):
    total_distance += bounciness_index * (2**0.5)

print("{:.3f}".format(total_distance))