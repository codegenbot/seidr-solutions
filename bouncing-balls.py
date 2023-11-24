starting_height = float(input())
second_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = second_bounce_height / starting_height
total_distance = (1 + (bounciness_index ** 2)) * (starting_height / (1 - bounciness_index)) * (1 - (bounciness_index ** num_bounces))

print(total_distance)