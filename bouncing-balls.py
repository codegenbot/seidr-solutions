bounciness_index = float(input("Enter the height after the first bounce: ")) / float(
    input("Enter the starting height: ")
)
num_bounces = int(input("Enter the number of bounces: "))

total_distance = 0
for i in range(num_bounces):
    total_distance += (2**i) * (bounciness_index - 1)

print("{:.4f}".format(total_distance))