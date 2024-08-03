n = int(input())
numbers = list(map(int, input().split()))
target = int(input())

for i in range(n):
    for j in range(i + 1, n):
        if numbers[i] + numbers[j] == target:
            print(numbers[i])
            print(numbers[j])