starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

total_distance = starting_height

for _ in range(num_bounces):
    bounciness_index = first_bounce_height / total_distance
    total_distance += 2 * (bounciness_index * total_distance)

total_distance