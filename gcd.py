```Python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")

def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        try:
            i = text.index(target)
            result.append(i)
            text = text[i+1:]
        except ValueError:
            break
    return result

print(indices_of_substring(text, target))