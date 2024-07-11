starting_height = float(input())
bounciness_index = 0.6
num_bounces = float(input())
new_starting_height = starting_height * bounciness_index
final_height = new_starting_height * (bounciness_index ** num_bounces)
total_distance = starting_height + new_starting_height * (1 - bounciness_index ** num_bounces) / (1 - bounciness_index)

print(total_distance)