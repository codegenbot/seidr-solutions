start_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / start_height
total_distance = start_height + (start_height + bounce_height) * bounciness_index * (
    num_bounces - 1
)

print(total_distance)