starting_height, first_bounce_height, num_bounces = map(float, input().split())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)