import math

a, b = map(int, input("Enter two integers: ").split())
print(math.gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")
print([i for i in range(len(text)) if text[i:i+len(target)] == target])