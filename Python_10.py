```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    
    while not is_palindrome(new_string):
        middle = (len(new_string) - 1) // 2
        for i in range(len(new_string)):
            if i < middle or ((2 * middle + 1) > i >= middle and i % 2 == 0):
                new_string = new_string[:i] + string[0] + new_string[i:]
                break

    return new_string