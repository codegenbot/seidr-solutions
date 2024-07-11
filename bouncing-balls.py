def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = first_bounce_height

    for _ in range(1, num_bounces):
        next_bounce_height = starting_height * bounciness_index
        total_distance += next_bounce_height * 2
        bounciness_index = next_bounce_height / starting_height

    return total_distance


starting_height, first_bounce_height, num_bounces = map(int, input().split())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)