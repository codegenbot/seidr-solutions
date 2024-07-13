```
words = input("Enter a string: ").strip()
print(check(input("Enter a string: ").strip()))

def check(input):
    return "I know or quickly said the same." if len(input.split()) > 1 else "All good!"