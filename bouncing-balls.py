starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = first_bounce_height

current_height = first_bounce_height

for _ in range(num_bounces - 1):
    current_height *= bounciness_index
    total_distance += current_height * 2

print(total_distance)