def calculate_total_distance(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = starting_height + bounce_height
    for _ in range(2, num_bounces + 1):
        total_distance += 2 * bounce_height
        bounce_height *= bounciness_index
        total_distance += bounce_height
    return total_distance


starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(starting_height, bounce_height, num_bounces))