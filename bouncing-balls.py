starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

for i in range(num_bounces):
    bounce_height = total_distance * bounciness_index
    total_distance += bounce_height * 2
    bounciness_index = bounce_height / starting_height

print(total_distance)