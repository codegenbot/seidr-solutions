starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

for _ in range(num_bounces):
    total_distance += first_bounce_height
    first_bounce_height *= bounciness_index * 2

print(total_distance)