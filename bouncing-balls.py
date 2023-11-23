starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

for i in range(num_bounces):
    bounce_height = total_distance * bounciness_index
    total_distance += bounce_height * 2
    bounciness_index = bounciness_index ** 2

print(total_distance)