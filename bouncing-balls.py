def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    total_distance = starting_height + first_bounce_height / (1 - 2 * ((first_bounce_height / starting_height) ** num_bounces))
    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)