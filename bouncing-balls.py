starting_height, bounce_height, num_bounces = map(float, input().split())
bounciness_index = bounce_height / starting_height
total_distance = starting_height + bounce_height + 2 * bounce_height * (1 - bounciness_index) ** num_bounces
print(total_distance)