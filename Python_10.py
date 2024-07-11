```
def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            char_to_add = None
            for char in s:
                if s.count(char) > 1 or char == s[i]:
                    char_to_add = char
            s.insert(0, char_to_add)
            s.pop()
        i += 1
        j -= 1
    return ''.join(s)