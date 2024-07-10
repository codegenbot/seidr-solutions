a, b = map(int, input("Enter two integers (separated by space): ").split())
print(math.gcd(a, b))

text = input("Enter text: ")
target = input("Enter target string: ")
print(*[i for i in range(len(text)-len(target)+1) if text[i:i+len(target)]==target])