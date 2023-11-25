# Read input from user
starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

# Calculate bounciness index
bounciness_index = bounce_height / starting_height

# Calculate total distance traveled across bounces
distance_traveled = starting_height + 2 * bounce_height * (1 - bounciness_index**num_bounces) / (1 - bounciness_index)

# Print the result
print(distance_traveled)