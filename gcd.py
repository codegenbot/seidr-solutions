Here is the Python solution:

def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

text = input()
target = input()

result = []
index = 0
while index < len(text) - len(target) + 1:
    if text[index:index+len(target)] == target:
        result.append(index)
    index += 1

print(gcd(int(input()), int(input())))
print(result)