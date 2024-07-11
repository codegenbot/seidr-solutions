def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""

    while True:
        print("Enter a word to make palindrome (or 'q' to quit):")
        new_word = input()

        if new_word.lower() == "q":
            break

        if is_palindrome(new_word):
            return new_word + new_word
        else:
            for i in range(len(string)):
                if string[i:] == string[i:][::-1]:
                    return new_word + string[i:][::-1]