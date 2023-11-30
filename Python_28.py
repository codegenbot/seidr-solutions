def concatenate(strings):
    return ''.join(strings)

n = int(input())
strings = []

for _ in range(n):
    string = input().strip()
    strings.append(string)

result = concatenate(strings)

print(result)