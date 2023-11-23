n = int(input())
numbers = list(map(int, input().split()))

leaders = find_leaders(numbers)
print(len(leaders))
for leader in reversed(leaders):
    print(leader)