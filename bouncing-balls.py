start_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = start_height + (2 * first_bounce_height * bounciness_index)

for _ in range(bounces-1):
    bounciness_index *= bounciness_index
    total_distance += (2 * first_bounce_height * bounciness_index)

print(total_distance)