```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = text.find(target)
    
    while index != -1:
        result.append(index + 1)
        index = text.find(target, index + 1)
        
    return result

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))