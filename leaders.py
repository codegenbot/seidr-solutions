def find_leaders(numbers):
    leaders = []
    max_right = numbers[-1]
    leaders.append(max_right)
    for i in range(len(numbers) - 2, -1, -1):
        if numbers[i] >= max_right:
            max_right = numbers[i]
            leaders.append(max_right)
    return leaders


numbers = list(map(int, input().split()))

result = find_leaders(numbers)
for leader in result:
    print(leader)