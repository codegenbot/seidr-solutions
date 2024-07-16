numbers = []
for _ in range(int(input())):
    numbers.extend(map(int, input().split()))
print(sum(numbers))