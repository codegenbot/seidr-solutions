def calculate_total_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = starting_height + (2 * (bounciness_index * starting_height)) * sum(
        [bounciness_index**i for i in range(num_bounces)]
    )
    return total_distance


starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

output = calculate_total_distance(starting_height, bounce_height, num_bounces)
print(output)