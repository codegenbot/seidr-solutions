def total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height

    for _ in range(2, num_bounces + 1):
        total_distance += 2 * first_bounce_height * bounciness_index
        first_bounce_height *= bounciness_index

    return total_distance


# Read input
starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

# Calculate total distance and print output
print(total_distance(starting_height, first_bounce_height, num_bounces))