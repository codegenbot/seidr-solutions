inputs = input().split()

if len(inputs) >= 2:
    a = int(inputs[0])
    b = int(inputs[1])
    print(gcd(a, b))
else:
    print("Please provide two integers as input.")

text = input()
target = input()
print(indices_of_substring(text, target))