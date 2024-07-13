words = input("Enter a string: ").strip()
print(check(input("Enter a string: ").strip()))

def check(sentence):
    return "I know or quickly said the same." if len(sentence.split()) > 1 else "All good!"