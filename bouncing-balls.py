starting_height = float(input())
bounciness_index = float(input()) / starting_height
num_bounces = int(input())
total_distance = starting_height * 2

for _ in range(num_bounces):
    final_height = starting_height * bounciness_index
    total_distance += final_height * 2
    starting_height = final_height

print(total_distance - final_height)