bounciness_index = float(input("Enter starting height: ")) / float(
    input("Enter height after first bounce: ")
)
print(bounciness_index)

n_bounces = int(input("Enter number of bounces: "))
total_distance = (1 + bounciness_index) ** n_bounces - 1
print(total_distance)