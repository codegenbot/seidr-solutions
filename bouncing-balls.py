bounciness_index = float(input("Enter height after first bounce: ")) / float(
    input("Enter starting height: ")
)
num_bounces = int(input("Enter number of bounces: "))
total_distance = 0
for i in range(1, num_bounces + 1):
    total_distance += (2**i) * bounciness_index

print(total_distance)