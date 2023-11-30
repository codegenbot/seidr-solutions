n = int(input())
strings = []

for _ in range(n):
    strings.append(input())

def concatenate(strings):
    return ''.join(strings)

result = concatenate(strings)

if len(strings) == n: 
    print(result)
else:
    print("Incorrect input format")