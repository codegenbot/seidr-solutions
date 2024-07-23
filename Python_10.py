def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        postfix = string[i:]
        if is_palindrome(postfix):
            return string + postfix[::-1]
    return string + string[::-1]


print("Palindrome checker:")
word = input("Enter a word: ")
if is_palindrome(word):
    print(f"'{word}' is a palindrome.")
else:
    print(f"'{word}' is not a palindrome.")

print("\nPalindrome maker:")
while True:
    word = input("Enter a word (or 'q' to quit): ")
    if word.lower() == "q":
        break
    if not is_palindrome(word):
        new_word = make_palindrome(word)
        print(f"'{word}' made into palindrome: '{new_word}'")