```
def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

m = int(input())
n = int(input())
print(gcd(m, n))
text = input()
target = input()
print(indices_of_substring(text, target))