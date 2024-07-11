def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + 2 * first_bounce_height * sum([bounciness_index**i for i in range(1, num_bounces)])
    return total_distance

starting_height, first_bounce_height, num_bounces = map(float, input("Enter starting height, first bounce height, number of bounces: ").split(',')) 
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)