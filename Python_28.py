def concatenate(strings: list) -> str:
    return ''.join(strings)

n = int(input())
strings = [input() for _ in range(n)]
result = concatenate(strings)
print(result)