def find_leaders(numbers):
    leaders = []
    for i in range(len(numbers)):
        if i == len(numbers) - 1 or numbers[i] >= max(numbers[i+1:]):
            leaders.append(numbers[i])
    return leaders

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

result = find_leaders(numbers)
for num in result:
    print(num)