starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height * bounciness_index

for _ in range(num_bounces):
    first_bounce_height *= bounciness_index * 2

print(format(total_distance, '.10f'))