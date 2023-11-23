starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = round((starting_height + bounce_height) * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index), 15)

print(total_distance)