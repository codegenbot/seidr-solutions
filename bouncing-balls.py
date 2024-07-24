bounciness_index = float(input("Enter the height after the first bounce: ")) / float(
    input("Enter the starting height: ")
)
num_bounces = int(input("Enter the number of bounces: "))

total_distance = 0
current_height = float(input("Enter the starting height: "))
for _ in range(num_bounces):
    total_distance += (
        current_height
        + bounciness_index
        - bounciness_index**2 / (2 * (bounciness_index + 1))
    )
    current_height *= bounciness_index

print(f"Total distance traveled is {total_distance:.4f}")