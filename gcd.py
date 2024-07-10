a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text_target = input("Enter text and target string (separated by space): ").split()
text, *target = text_target
print(*indices_of_substring(text, "".join(target)))