n = int(input())
strings = []

for _ in range(n):
    strings.append(input())

def concatenate(strings: list) -> str:
    return ''.join(strings)

result = concatenate(strings)
print(result)