import sys

if len(sys.argv) != 3:
    print("Usage: python program_name.py <num1> <num2>")
else:
    a, b = int(sys.argv[1]), int(sys.argv[2])
    print(gcd(a, b))
    text, target = sys.argv[1], sys.argv[2]
    print(indices_of_substring(text, target))