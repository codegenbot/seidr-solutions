```
def check(word):
    if len(word) < 3:
        return "Too short"
    elif word[0].lower() == word[-1].lower():
        return "Good"
    else:
        return "Bad"

print(check(input("Enter a string: ").strip()))