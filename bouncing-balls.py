bounciness_index = float(input("Enter starting height: ")) / float(
    input("Enter first bounce height: ")
)

num_bounces = int(input("Enter number of bounces: "))
total_distance = 0
for _ in range(num_bounces):
    total_distance += bounciness_index

print(f"{total_distance:.4f}")