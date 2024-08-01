def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        middle = ""
        for i in range(len(string)):
            if i < len(string)//2:
                middle += string[i]
            else:
                middle += string[-i-1]
        return middle + middle