```python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = text.find(target)
    while index != -1:
        result.append(index)
        index = text.find(target, index + 1)
    return result

values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, values)
    print(gcd(a, b))

values = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(*values))