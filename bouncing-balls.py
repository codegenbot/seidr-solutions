starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = (
    starting_height + 2 * (1 - bounciness_index) * starting_height
)

print(total_distance)