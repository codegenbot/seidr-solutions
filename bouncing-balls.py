start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

distance = 0
for _ in range(num_bounces):
    distance += (start_height + first_bounce_height) * (2**_ - 1) * bounciness_index
    start_height *= (1 - bounciness_index)
print(round(distance, 5))