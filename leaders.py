input = list(map(int, input().split()))
leaders = []
max_right = 0
for i in range(len(input)):
    max_right = input[i]
    leaders.append(max_right)
print(leaders)