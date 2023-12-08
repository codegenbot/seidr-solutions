starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0.0

for i in range(1, num_bounces+1):
    total_distance += 2 * bounciness_index * starting_height
    bounciness_index = bounciness_index ** i

total_distance -= starting_height

print(total_distance)