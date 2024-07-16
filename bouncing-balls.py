starting_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / starting_height
distance = starting_height + first_bounce_height

for _ in range(bounces - 1):
    distance += 2 * first_bounce_height * bounciness_index
    first_bounce_height *= bounciness_index

print(distance)