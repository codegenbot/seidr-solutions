def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
result = gcd(a, b)
print(result)

text = input("Enter the text: ")
target = input("Enter the target string: ")
indices_result = indices_of_substring(text, target)
print(indices_result)