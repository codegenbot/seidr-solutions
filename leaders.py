def find_leaders(numbers):
    leaders = []
    max_right = -1
    for num in reversed(numbers):
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return leaders


n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

leaders = find_leaders(numbers)
print(len(leaders))
for leader in reversed(leaders):
    print(leader)