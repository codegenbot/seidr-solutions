start_height, first_bounce_height, num_bounces = map(float, input().split())
bounciness_index = first_bounce_height / start_height
total_distance = start_height + (2 * start_height * (1 - bounciness_index ** num_bounces)) / (1 - bounciness_index)
print(total_distance)