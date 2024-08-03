bounciness_index = float(input("Enter height after first bounce: ")) / float(
    input("Enter starting height: ")
)
num_bounces = int(input("Enter number of bounces: "))

distance = 0
for _ in range(num_bounces):
    distance += 2 * (1 - math.pow(bounciness_index, -1))
print("%.3f" % distance)