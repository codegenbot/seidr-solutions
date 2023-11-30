strings = [input() for _ in range(int(input()))]

def concatenate(strings) -> str:
    return ''.join(strings)

result = concatenate(strings)

print(result)