starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0
distance = starting_height

for _ in range(num_bounces):
    total_distance += distance
    distance *= bounciness_index
    total_distance += distance

print(total_distance)