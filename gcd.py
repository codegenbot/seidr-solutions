```
print("Enter two integers to find their greatest common divisor and enter a text string and target string to find indices of the target string in the text.")
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
text = input("Enter the text: ")
target = input("Enter the target: ")

print(gcd(a, b))
print(indices_of_substring(text, target))