starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height * (1 + bounciness_index) ** (num_bounces + 1) - starting_height

final_distance = round(total_distance, 2)
print(final_distance)