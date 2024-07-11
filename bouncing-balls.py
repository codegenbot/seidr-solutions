starting_height = float(input())
bounciness_index = 0.6
num_bounces = int(input())

total_distance = starting_height + num_bounces * (starting_height * (1 + bounciness_index) ** 2)
print(total_distance)