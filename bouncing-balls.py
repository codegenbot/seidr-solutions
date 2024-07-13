import math

start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the first bounce height: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = first_bounce_height / start_height
total_distance = 0.0

for i in range(num_bounces):
    if i == 0:
        previous_bounce_height = start_height
    else:
        previous_bounce_height = (previous_bounce_height * bounciness_index) / 2
    total_distance += previous_bounce_height + start_height

print(total_distance)