```
def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while True:
        pos = text.find(target, start_index)
        if pos == -1:
            break
        result.append(pos)
        start_index = pos + 1
    return result

num1 = int(input())
num2 = int(input())
print(gcd(num1, num2))

text = input()
target = input()
print(indices_of_substring(text, target))