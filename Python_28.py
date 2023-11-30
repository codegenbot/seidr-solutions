def concatenate(strings):
    return ''.join(strings)

n = int(input().strip())
strings = []

for _ in range(n):
    string = input()
    strings.append(string + ' ')

result = concatenate(strings)

print(result)