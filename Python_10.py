def make_palindrome(s: str) -> str:
    if s == "":  
        return "a" + "a"  
    elif s == s[::-1]:
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