bounciness_index = float(input()) / 1.001
total_distance = 0
for _ in range(int(input())):
    total_distance += bounciness_index ** (_ + 1)
print("{:.3f}".format(total_distance))