Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

# Test cases
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))

print(gcd(4, 400000))
print(indices_of_substring("hellohellohello", "hello"))

print(gcd(54, 24))
print(indices_of_substring("abcdefgabcdefg", "abc"))

print(gcd(4200, 3528))
print(indices_of_substring("abcdefghijklmnopqrstuvwxyz", "abcd"))

print(gcd(820000, 63550))
print(indices_of_substring("a"*10000, "a"*5))