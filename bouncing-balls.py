start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height

for i in range(num_bounces):
    total_distance += 2 * bounciness_index * total_distance

total_distance