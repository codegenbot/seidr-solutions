# Read input
starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

# Calculate bounciness index
bounciness_index = bounce_height / starting_height

# Calculate total distance traveled
total_distance = starting_height + bounce_height
for _ in range(2, num_bounces + 1):
    total_distance += 2 * bounce_height
    bounce_height *= bounciness_index

print(total_distance)