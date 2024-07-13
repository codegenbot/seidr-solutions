start_height, first_bounce_height, num_bounces = map(float, input().split())
bounciness_index = first_bounce_height / start_height
total_distance = start_height + 2 * start_height * sum([bounciness_index ** i for i in range(num_bounces)])
print(total_distance)