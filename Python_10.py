def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(s: str) -> str:
    while True:
        if isinstance(s, str):
            break
        else:
            print("Invalid input. Please enter a string.")
            s = input()
    if s == s[::-1]:
        return s
    else:
        temp = s
        while not is_palindrome(temp):
            if len(temp) % 2 == 0:
                temp = temp[1:-1]
            elif temp[0] == temp[-1]:
                temp = temp[1:-1]
            else:
                temp = temp[1] + temp[0] + temp[-1]
        return temp