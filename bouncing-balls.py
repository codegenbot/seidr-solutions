def total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    multiplier = 2 * bounciness_index

    for _ in range(num_bounces - 1):
        total_distance += first_bounce_height * multiplier
        multiplier *= bounciness_index

    return total_distance


# Read input
starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

# Calculate and print output
output = total_distance(starting_height, first_bounce_height, num_bounces)
print(output)