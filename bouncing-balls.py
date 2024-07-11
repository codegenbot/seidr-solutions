starting_height, first_bounce_height, num_bounces = map(float, input('Enter starting height, first bounce height, and number of bounces: ').split())

def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height

    for _ in range(num_bounces):
        total_distance += (
            2 * first_bounce_height
        )
        first_bounce_height *= bounciness_index

    return total_distance

result = calculate_total_distance(starting_height, first_bounce_height, int(num_bounces))
print(result)