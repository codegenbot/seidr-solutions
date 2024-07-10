starting_height = float(input())
height_after_first_bounce = float(input())
bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height
total_distance = (1 + bounciness_index) ** bounces - 1

print(round(total_distance, 6))