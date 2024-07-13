words = input("Enter a string: ").strip()
print(check(words))

def check(sentence):
    if len(sentence.split()) > 1:
        return "I know or quickly said the same."
    else:
        return "All good!"