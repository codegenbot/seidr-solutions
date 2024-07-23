starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

height = first_bounce_height
for _ in range(num_bounces - 1):
    height *= bounciness_index
    total_distance += 2 * height

print(total_distance)