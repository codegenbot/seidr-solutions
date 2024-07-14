h = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / h

total_distance = 0
height = first_bounce_height
for _ in range(bounces):
    total_distance += height
    height /= bounciness_index

print(bounciness_index)
print(total_distance + h)