def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height

    total_distance = first_bounce_height  # Distance for first bounce only

    for _ in range(num_bounces - 1):  # Loop for remaining bounces
        total_distance += 2 * first_bounce_height  # Add distance for upward and downward bounce
        first_bounce_height *= bounciness_index  # Update bounce height for next bounce

    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print("{:.15f}".format(result))