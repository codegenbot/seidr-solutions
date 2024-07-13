def calculate_total_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = starting_height + (2 * bounciness_index * starting_height) * (
        1 - bounciness_index**num_bounces
    ) / (1 - bounciness_index)
    return total_distance


starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, bounce_height, num_bounces)
print(result)