starting_height = float(input("Enter the starting height: "))
bounciness_index = float(input("Enter the bounciness index: "))
num_bounces = int(input("Enter the number of bounces: "))

total_distance = starting_height * (
    1 + 1 / (1 - bounciness_index) * (1 - bounciness_index**num_bounces)
)

print(f"Total distance traveled across {num_bounces} bounces: {total_distance}")