starting_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height

total_distance = 0
for _ in range(num_of_bounces):
    total_distance += bounciness_index
    bounciness_index *= bounciness_index

print(
    "{:.3f}".format(
        starting_height
        + 2
        * (starting_height - height_after_first_bounce)
        * (1 - bounciness_index**num_of_bounces)
    )
)