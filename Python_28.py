def concatenate(strings):
    return "".join(strings)


n = int(input())
strings = []
for _ in range(n):
    strings.append(input().strip())
result = concatenate(strings)
print(result)