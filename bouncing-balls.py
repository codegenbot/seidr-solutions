starting_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height
total_distance = 0

for i in range(1, num_of_bounces + 1):
    total_distance += (2**i) * bounciness_index - 1

print(total_distance)