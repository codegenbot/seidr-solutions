def concatenate(strings):
    return ''.join(strings)

n = int(input().strip())
strings = [input().strip() for _ in range(n)]
result = concatenate(strings)

print(result)