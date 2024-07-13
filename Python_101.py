```Python
words = input("Enter a string: ").strip()
def check():
    return "I know or quickly said the same." if len(words.split()) > 1 else "All good!"
print(check())