Here is the Python solution:

n = int(input())
m = int(input())

if n < m:
    result = 0.0
elif n > m:
    result = 1 - (m / n)
else:
    result = 0.5

print(result)