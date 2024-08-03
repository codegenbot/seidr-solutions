starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
height = first_bounce_height

for _ in range(num_bounces):
    total_distance += height
    height *= bounciness_index

print(f"{starting_height:.3f}")
print(f"{first_bounce_height:.3f}")
print(f"{num_bounces}\n{float(total_distance):.6f}")