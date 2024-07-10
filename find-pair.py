n = int(input())
numbers = [int(x) for x in input().split()]
target = int(input())

for i in range(len(numbers)):
    for j in range(i + 1, len(numbers)):
        if numbers[i] + numbers[j] == target:
            print(numbers[i])
            print(numbers[j])