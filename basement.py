n = int(input())
numbers = list(map(int, input().split()))

prefix_sum = 0
for i in range(n):
    prefix_sum += numbers[i]
    if prefix_sum < 0:
        print(i)
        break