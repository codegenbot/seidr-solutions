starting_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
for _ in range(bounces):
    total_distance += bounciness_index ** (_ + 1)

print(round(total_distance, 4))