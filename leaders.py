def find_leaders(numbers):
    leaders = []
    max_num = -1
    for i in range(len(numbers)-1, -1, -1):
        if numbers[i] >= max_num:
            leaders.append(numbers[i])
            max_num = numbers[i]
    return leaders

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

result = find_leaders(numbers)
for num in result:
    print(num)