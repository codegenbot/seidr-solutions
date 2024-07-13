```
def gcd(a, b):
    if b == 0:
        return abs(a)
    else:
        a, b = b, a % b
    return abs(gcd(a, b))

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

def find_gcd():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")

find_gcd()