def total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    for _ in range(2, num_bounces + 1):
        total_distance += 2 * bounciness_index * total_distance
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(total_distance(starting_height, first_bounce_height, num_bounces))