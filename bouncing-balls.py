def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    for _ in range(num_bounces - 1):
        total_distance += 2 * first_bounce_height * bounciness_index
        first_bounce_height *= bounciness_index
    return total_distance


input_values = input().split()
starting_height = float(input_values[0])
first_bounce_height = float(input_values[1])
num_bounces = int(input_values[2])
result = calculate_distance(starting_height, first_bounce_height, num_bounces)
print(result)