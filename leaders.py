def find_leaders(numbers):
    leaders = []
    max_num = float('-inf')
    for num in numbers[::-1]:
        if num >= max_num:
            leaders.append(num)
            max_num = num
    return leaders

n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

result = find_leaders(numbers)
for num in result:
    print(num)