starting_height = float(input())
bounciness_index = float(input()) / starting_height
num_bounces = int(input())
final_height = starting_height * bounciness_index**num_bounces
total_distance = starting_height * (1 + final_height / starting_height)

print(total_distance)