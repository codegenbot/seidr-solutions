starting_height = float(input())
bounciness_index = float(input()) / starting_height
num_bounces = int(input())
total_distance = starting_height

for _ in range(num_bounces):
    final_height = starting_height * bounciness_index
    total_distance += final_height * 2
    starting_height = final_height

total_distance -= final_height  # Adjust total distance

print(total_distance)