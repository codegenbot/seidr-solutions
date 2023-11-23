starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

bounce_height = starting_height
for i in range(num_bounces):
    bounce_height = bounce_height * bounciness_index
    total_distance += (starting_height + bounce_height) * 2
    bounciness_index = bounciness_index ** 2

total_distance