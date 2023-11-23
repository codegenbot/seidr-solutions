def find_leaders(numbers):
    leaders = []
    max_right = numbers[-1]
    leaders.append(max_right)
    for i in range(len(numbers) - 2, -1, -1):
        if numbers[i] >= max_right:
            max_right = numbers[i]
            leaders.append(max_right)
    return leaders


n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

result = find_leaders(numbers)
for leader in result:
    print(leader)