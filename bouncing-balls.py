starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = (1 + bounciness_index) ** num_bounces - 1

print("{:.3f}".format(total_distance))