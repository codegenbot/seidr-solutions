starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = (
    starting_height * (1 + (1 - bounciness_index) * (1 - bounciness_index))
    + 2 * (1 - bounciness_index) * starting_height * (1 - (1 - bounciness_index) ** (num_bounces - 1))
)

print(total_distance)