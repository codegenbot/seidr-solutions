starting_height, bounce_height, num_bounces = map(float, input().split())

bounciness_index = bounce_height / starting_height
total_distance = starting_height + bounce_height

for _ in range(num_bounces - 1):
    total_distance += bounce_height * 2
    bounce_height *= bounciness_index

print(total_distance)