n = int(input())
numbers = list(map(int, input().split()))

current_sum = 0
for i in range(n):
    current_sum += numbers[i]
    if current_sum < 0:
        print(i)
        break