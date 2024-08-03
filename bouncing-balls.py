starting_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

for _ in range(num_of_bounces):
    total_distance += bounciness_index * (1 + 2 ** (_ % 2))

print(total_distance)