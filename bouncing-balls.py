bounciness_index = float(input()) / float(input())
num_bounces = int(input())

total_distance = 0
height = float(input())
for _ in range(num_bounces):
    total_distance += height * (1 - bounciness_index)
    height *= bounciness_index

print("{:.3f}".format(total_distance))