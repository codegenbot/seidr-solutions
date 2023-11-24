starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

current_height = first_bounce_height * bounciness_index

for _ in range(num_bounces - 1):
    current_height = current_height * bounciness_index * bounciness_index
    total_distance += 2 * current_height

final_distance = round(total_distance, 2)
print(final_distance)