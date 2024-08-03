bounciness_index = float(input()) / float(input())
distance = 0
for _ in range(int(input())):
    distance += 2 * bounciness_index ** (_ + 1) - 1
print(float(distance))