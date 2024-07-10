starting_height, height_after_first_bounce, num_bounces = map(float, input().split())
bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height + starting_height * (1 + bounciness_index) + starting_height * (1 + bounciness_index) ** 2 * (num_bounces - 1)
print(total_distance)