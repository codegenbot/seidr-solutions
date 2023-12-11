def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + (bounciness_index * 2 * num_bounces)
    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

output = calculate_distance(starting_height, first_bounce_height, num_bounces)
print(output)