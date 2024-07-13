def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()
start_index = 0
indices = []
while start_index < len(text) - len(target) + 1:
    if text[start_index:start_index+len(target)] == target:
        indices.append(start_index)
    start_index += 1

print(gcd(int(input()), int(input())))