def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    distance = starting_height + (starting_height + first_bounce_height) * num_bounces
    return distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = calculate_distance(starting_height, first_bounce_height, num_bounces)
print(result)