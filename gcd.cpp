[PYTHON]
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def indicesOfSubstring(text, target):
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

def main():
    a, b = map(int, input().split())
    print(gcd(a, b))
    text = input()
    target = input()
    result = indicesOfSubstring(text, target)
    for i in result:
        print(i, end=" ")

main()
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(10, 15) == 5
# Test case 2:
assert gcd(10, 10) == 10
# Test case 3:
assert gcd(10, 12) == 2
[/TESTS]
