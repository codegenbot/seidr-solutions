def total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    factor = 2
    for _ in range(num_bounces - 1):
        total_distance += first_bounce_height * bounciness_index**factor
        factor *= 2
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = total_distance(starting_height, first_bounce_height, num_bounces)
print(result)