def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    else:
        temp = s
        while True:
            if len(temp) % 2 == 0:
                temp = temp[1:-1]
            elif temp[0] == temp[-1]:
                temp = temp[1:-1]
            else:
                temp = temp[1] + temp[0] + temp[-1]
            if is_palindrome(temp):
                break
        return temp


def is_palindrome(s: str) -> bool:
    return s == s[::-1]