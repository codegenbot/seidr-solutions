bounciness_index = float(input("Enter height after first bounce: ")) / float(
    input("Enter starting height: ")
)

distance = 0
for i in range(int(input("Enter number of bounces: "))):
    distance += 1 - pow(bounciness_index, i + 1)
print("%.6f" % distance)