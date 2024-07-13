```
words = input("Enter a string: ").strip()
print(check(words))

def check(words):
    return "I know or quickly said the same." if len(words.split()) > 1 else "All good!"