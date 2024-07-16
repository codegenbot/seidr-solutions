n = int(input())
if n < 1 or n > 100:
    raise ValueError("Invalid input for n")

strings = [input() for _ in range(n)]

def longest(strings):
    return max(strings, key=len)

print(longest(strings))