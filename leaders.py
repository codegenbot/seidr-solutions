input = list(map(int, input().split()))
leaders = [input[-1]]
for i in range(len(input)-2, -1, -1):
    leaders.append(max(input[:i+1]))
print(list(reversed(leaders)))