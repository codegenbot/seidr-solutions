starting_height = float(input())
height_after_bounce = float(input())
number_of_bounces = int(input())

bounciness_index = height_after_bounce / starting_height
total_distance = starting_height

for _ in range(number_of_bounces):
    total_distance += 2 * total_distance * bounciness_index

print(total_distance)