n = int(input())
strings = [input() for _ in range(n)]

def concatenate(strings):
    return ''.join(strings)

result = concatenate(strings)

if len(result) == sum(len(s) for s in strings): 
    print(result)
else:
    print("Incorrect input format")