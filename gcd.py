def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


while True:
    try:
        a = int(input())
        b = int(input())
        break
    except ValueError:
        print("Invalid input. Please enter integers.")

print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))