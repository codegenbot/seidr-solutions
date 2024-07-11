input_str = input()
starting_height = float(input_str)

first_bounce_height = 0.6 * starting_height
num_bounces = float(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

for _ in range(int(num_bounces) - 1):
    first_bounce_height *= bounciness_index
    total_distance += 2 * first_bounce_height

print(total_distance)