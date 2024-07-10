```
n = int(input())
numbers = list(map(int, input().split()))
target_sum = int(input())

pair = None
for i in range(len(numbers)):
    for j in range(i+1, len(numbers)):
        if numbers[i] + numbers[j] == target_sum:
            pair = (numbers[i], numbers[j])
            break
    if pair:
        break

print(pair[0])
print(pair[1])