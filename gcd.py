```
"""
if __name__ == "__main__":
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))
    print(f"GCD of {a} and {b} is {gcd(a, b)}")
    
    text = input("Enter the text string: ")
    target = input("Enter the target string: ")
    print(f"Indices of '{target}' in '{text}' are {indices_of_substring(text, target)}")
"""

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