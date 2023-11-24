starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

current_height = starting_height

for _ in range(num_bounces):
    current_height *= (1 + bounciness_index)
    total_distance += (2 * current_height)

print(total_distance)