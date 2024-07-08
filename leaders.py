input = list(map(int, input().split()))
max_right = 0
leaders = [input[-1]]
for i in range(len(input)-2, -1, -1):
    if input[i] >= max_right:
        leaders.append(input[i])
        max_right = input[i]
print(list(reversed(leaders)))