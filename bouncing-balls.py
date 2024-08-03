starting_height, bounce_height, bounces = map(float, input().split())
bounciness_index = bounce_height / starting_height
total_distance = starting_height + bounce_height * ((1 - bounciness_index ** (bounces)) / (1 - bounciness_index))
print(total_distance)