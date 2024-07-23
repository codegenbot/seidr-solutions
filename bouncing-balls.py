starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0
total_distance += starting_height + first_bounce_height

for i in range(1, num_bounces):
    bounce_height = first_bounce_height * bounciness_index
    total_distance += 2 * bounce_height
    if i % 2 == 0:
        first_bounce_height = bounce_height
        bounciness_index = bounce_height / first_bounce_height

print(total_distance)