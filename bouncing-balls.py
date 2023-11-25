start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height + (first_bounce_height * num_bounces) - (start_height * bounciness_index ** num_bounces)

print(total_distance)