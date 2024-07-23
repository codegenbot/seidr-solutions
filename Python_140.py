```
def fix_spaces(text):
    return text.replace(" ", "_")

def check(func):
    text = input("Enter a string: ")
    result = func(text)
    print(result)

check(fix_spaces)