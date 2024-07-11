starting_height = float(input())
bounciness_index = 0.6
num_bounces = int(input())
final_height = starting_height * (bounciness_index ** num_bounces)
total_distance = starting_height + starting_height + final_height * (1 - bounciness_index)

print(total_distance)