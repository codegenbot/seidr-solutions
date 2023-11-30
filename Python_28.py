n = int(input())
strings = [input() for _ in range(n)]

def concatenate(strings):
    return ''.join(strings)

result = concatenate(strings)

if len(strings) == n: 
    print(result)
else:
    print("Incorrect input format")