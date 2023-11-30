n = int(input())
strings = [input() for _ in range(n)]

def concatenate(strings):
    return ''.join(strings)

result = concatenate(strings)

print(result)