def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string)):
            postfix = string[i:]
            lowercase_postfix = postfix.lower()
            if is_palindrome(lowercase_postfix):
                prefix_chars = [char.upper() if char.isalpha() and char.isupper() else char for char in string[:i]]
                return "".join(prefix_chars) + "#" * (len(string) - len(postfix)) + lowercase_postfix[::-1].capitalize()
    else:
        for i in range(len(string)):
            postfix = string[i:].lower()
            if is_palindrome(postfix):
                return (
                    string[0].upper() 
                    + "#" * (len(string) - len(postfix))
                    + postfix[::-1].capitalize()
                )