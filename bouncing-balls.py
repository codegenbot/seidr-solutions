starting_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
height = first_bounce_height

for _ in range(bounces - 1):
    height *= bounciness_index
    total_distance += height

print(round(total_distance, 6))