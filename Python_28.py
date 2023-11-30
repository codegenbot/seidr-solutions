def concatenate(strings):
    return ''.join(strings)

n = input()
strings = [input().strip() for _ in range(int(n))]
result = concatenate(strings)

print(result)