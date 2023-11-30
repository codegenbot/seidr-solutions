def concatenate(strings):
    return "".join(strings)

# Input format: 
# The first line contains an integer n (1 ≤ n ≤ 100), the number of strings.
# The next n lines contain a string each.
n = int(input())
strings = [input().strip() for _ in range(n)]
result = concatenate(strings)

print(result)