starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = starting_height

for _ in range(2, num_bounces + 1):
    total_distance += bounce_height
    bounce_height *= bounciness_index

print(total_distance)