def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

inputs = list(map(int, input("Enter two integers (separated by space): ").split()))
if len(inputs) != 2:
    print("Invalid input. Please provide exactly two integers.")
else:
    a, b = inputs[0], inputs[1]
    print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target string: ")

def indices_of_substring(text, target):
    start = 0
    indices = []
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

print(*indices_of_substring(text, target))