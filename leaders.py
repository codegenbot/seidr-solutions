def find_leaders(numbers):
    leaders = []
    max_right = -1
    for num in reversed(numbers):
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return leaders


numbers = list(map(int, input().split()))

leaders = find_leaders(numbers)
print(len(leaders))
for leader in reversed(leaders):
    print(leader)