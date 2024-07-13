```
def check(word):
    return "Contains" if any(char.lower() in 'aeiou' for char in word) else "Does not contain"

words = input("Enter a string: ").strip()
print(check(words))