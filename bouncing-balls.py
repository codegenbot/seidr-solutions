starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = starting_height + bounce_height

for _ in range(1, num_bounces):
    total_distance += 2 * bounce_height
    bounce_height *= bounciness_index

print(total_distance)