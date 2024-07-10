```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = i
            while True:
                if text[j:j+len(target)] != target:
                    break
                result.append(j)
                j += 1
    return result

while True:
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))
        text = input("Enter the text: ")
        target = input("Enter the target: ")
        break
    except ValueError:
        print("Invalid input. Please enter integers for gcd and valid strings for indices_of_substring function.")

print(gcd(a, b))
print(indices_of_substring(text, target))