# Read input
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

# Calculate bounciness index
bounciness_index = first_bounce_height / start_height

# Calculate total distance travelled
total_distance = start_height + 2 * first_bounce_height

for i in range(2, num_bounces):
    total_distance += 2 * first_bounce_height * bounciness_index**i

print(total_distance)