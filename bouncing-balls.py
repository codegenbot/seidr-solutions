starting_height, height_after_first_bounce, num_bounces = map(float, input().split())
bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height + height_after_first_bounce
for _ in range(2, num_bounces + 1):
    total_distance += 2 * height_after_first_bounce
    height_after_first_bounce *= bounciness_index
    total_distance += height_after_first_bounce
print(total_distance)