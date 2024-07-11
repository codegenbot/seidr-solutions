starting_height, height_after_first_bounce, num_bounces = map(float, input().split())
bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height + height_after_first_bounce * (
    1 - bounciness_index**num_bounces
) / (1 - bounciness_index)
print(total_distance)