```
text = input("Enter text: ")
target = input("Enter target: ")

while True:
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(find_indices(text, target))
print(gcd(a, b))