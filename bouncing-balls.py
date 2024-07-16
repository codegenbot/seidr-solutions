start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

total_distance = 0
height = start_height

for _ in range(num_bounces):
    total_distance += height
    height *= bounciness_index

print("{:.3f}".format(bounciness_index))
print("{:.6f}".format(total_distance))