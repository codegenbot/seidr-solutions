bounciness_index = float(input()) / float(input())
distance = 0
for _ in range(int(input())):
    distance += bounciness_index * (2 ** (_ + 1))
print(format(distance, ".6f"))