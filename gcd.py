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
    print("1. Calculate GCD")
    print("2. Find indices of substring")
    
    while True:
        choice = input("Enter your choice (1/2): ")
        
        if choice == '1':
            a = int(input("Enter a number: "))
            b = int(input("Enter another number: "))
            print(math.gcd(a, b))
            break
        elif choice == '2':
            text = input("Enter the text: ")
            target = input("Enter the target string: ")
            print(indices_of_substring(text, target))
            break
        else:
            print("Invalid choice. Please enter 1 or 2.")