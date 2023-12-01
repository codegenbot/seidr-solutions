import math

input_values = input().split()

if len(input_values) == 1:
    a = b = int(input_values[0])
else:
    a, b = map(int, input_values)

print(math.gcd(a, b))

text = input()
target = input()
print([i for i in range(len(text)) if text[i:i + len(target)] == target])