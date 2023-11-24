starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

current_height = first_bounce_height

for _ in range(num_bounces):
    current_height = current_height * bounciness_index
    total_distance += current_height * 2

final_distance = total_distance - starting_height
print(round(final_distance, 14))