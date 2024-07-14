bounciness_index = float(input("Enter height after first bounce: ")) / float(
    input("Enter starting height: ")
)

total_distance = 0
num_bounces = int(input("Enter number of bounces: "))

for _ in range(num_bounces):
    total_distance += 2 * bounciness_index - 1

print(total_distance)