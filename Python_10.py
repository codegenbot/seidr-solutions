def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    palindrome = ""
    while True:
        i_max = n-1
        while not is_palindle(new_string):
            new_string = new_string[:i_max+1] + "#"
            if i_max == 0:  
                break
        for i in range(i_max+1):  
            palindrome += new_string[i]
        new_string = new_string[1:]
        i_max -= 1
    return palindrome