n = int(input())
strings = [input() for _ in range(n)]

def concatenate(strings: list) -> str:
    return ''.join(strings)

result = concatenate(strings)

print(result)