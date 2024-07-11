starting_height = float(input())
bounciness_index = 0.6
num_bounces = int(input())
total_distance = starting_height

for _ in range(num_bounces):
    final_height = starting_height * bounciness_index
    total_distance += 2 * final_height
    starting_height = final_height

print(total_distance)