starting_height, bounce_height, num_bounces = (
    float(input()),
    float(input()),
    int(input()),
)
bounciness_index = bounce_height / starting_height
total_distance = starting_height + (2 - bounciness_index) * starting_height * (
    1 - bounciness_index**num_bounces
) / (1 - bounciness_index)
print(total_distance)