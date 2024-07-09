```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.find(target) != -1 and i <= text.find(target):
            j = 0
            while True:
                j = text.find(target, i + j)
                if j == -1: break
                result.append(i+j)
                i += j+1
    return result

print(gcd(int(input("Enter first integer: ")), int(input("Enter second integer: "))))

text = input("Enter a text string: ")
target = input("Enter a target string: ")

print(indices_of_substring(text, target))