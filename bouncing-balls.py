starting_height, bounce_height, num_bounces = map(float, input().split())
bounciness_index = bounce_height / starting_height
total_distance = starting_height + starting_height * (1 + bounciness_index) * (
    1 - bounciness_index**num_bounces
) / (1 - bounciness_index)
print(total_distance)