bounciness_index = float(input("Enter the starting height: ")) / float(
    input("Enter the height after the first bounce: ")
)
num_bounces = int(input("Enter the number of bounces: "))

distance = 0
height = bounciness_index

for i in range(num_bounces):
    distance += 2 * height
    height *= bounciness_index

print("{:.6f}".format(distance))