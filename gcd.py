```
import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result

def main():
    while True:
        try:
            a = int(input("Enter a number: "))
            b = int(input("Enter another number: "))
            print(math.gcd(a, b))
            text = input("Enter the text: ")
            target = input("Enter the target string: ")
            print(indices_of_substring(text, target))
            break
        except ValueError:
            print("Expected input: Integers only!")