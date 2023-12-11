def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]

assert gcd(1, 1) == 1
assert gcd(4, 400000) == 4
assert gcd(54, 24) == 6
assert gcd(4200, 3528) == 168
assert gcd(820000, 63550) == 2050

assert indices_of_substring("abcde", "ab") == [0, 1]
assert indices_of_substring("abcde", "bc") == [1, 2]
assert indices_of_substring("abcde", "cd") == [2, 3]
assert indices_of_substring("abcde", "de") == [3, 4]