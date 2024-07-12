# Read input
starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

# Calculate bounciness index
bounciness_index = bounce_height / starting_height

# Calculate total distance
total_distance = starting_height + 2 * bounce_height * sum(
    [bounciness_index**i for i in range(num_bounces)]
)

# Output total distance
print(total_distance)