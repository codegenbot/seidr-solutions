Here is the solution:

n = int(input())
m = int(input())

if n < m:
    result = 0
elif n > m:
    result = 1 - (m / n)
else:
    result = 0.5

print(f"{result:.4f}")