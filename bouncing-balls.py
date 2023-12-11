starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

for _ in range(num_bounces):
    total_distance += 2 * bounciness_index * total_distance
    bounciness_index *= bounciness_index

print(total_distance)