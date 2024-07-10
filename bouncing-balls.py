starting_height, first_bounce_height, num_bounces = map(float, input().split())
bounciness_index = first_bounce_height / starting_height
distance = starting_height + first_bounce_height

for _ in range(num_bounces - 1):
    distance += first_bounce_height
    first_bounce_height *= bounciness_index
    distance += first_bounce_height

print(distance)