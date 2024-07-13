starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height

total_distance = 0
for _ in range(num_bounces):
    total_distance += bounciness_index
    starting_height *= bounciness_index

print(bounciness_index)
print(int(total_distance))