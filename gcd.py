```
def gcd(m, n):
    while math.gcd(m, n) != 1:
        m = math.gcd(m, n)
        n //= m
    return m

def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos)
        i = pos + 1
    return result

# test cases
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))

print(gcd(4, 400000))
print(indices_of_substring("hello world hello hello", "hello"))

print(gcd(54, 24))
print(indices_of_substring("abcde abcde abcde", "abcde"))

print(gcd(4200, 3528))
print(indices_of_substring("abcdefghijklmnopqrstuvwxyz", "abc"))

print(gcd(820000, 63550))
print(indices_of_substring("a" * 100000, "a" * 25))