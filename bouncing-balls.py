starting_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height

total_distance = 0
for _ in range(num_of_bounces):
    total_distance += bounciness_index ** (2 * (_ + 1))

print(f"{total_distance:.4f}")