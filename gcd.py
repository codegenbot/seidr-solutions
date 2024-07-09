```
def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    result = []
    last_index = -1
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            end = start + len(target) - 1
            while True:
                if start == 0 and end == len(text) - 1:
                    break
                if text[start-1:end+2].endswith(target):
                    last_index = i
                    result.append(i)
                    break
    return result

m = int(input())
n = int(input())
print(gcd(m, n))

text = input()
target = input()
print(indices_of_substring(text, target))