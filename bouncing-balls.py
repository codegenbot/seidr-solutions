bounciness_index = first_bounce_height / start_height

distance = 0
height = start_height
for _ in range(num_bounces):
    height *= 2 - bounciness_index
    distance += height

print(round(distance, 5))