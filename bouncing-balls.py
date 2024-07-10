starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
current_height = first_bounce_height

for _ in range(num_bounces):
    total_distance += starting_height * (2 ** ((1 - bounciness_index) + _))
    current_height *= bounciness_index
    total_distance += abs(starting_height - current_height)

print(f"{total_distance:.4f}")