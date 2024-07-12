def make_palindrome(s: str) -> str:
    while True:
        if isinstance(s, str):
            break
        else:
            print("Invalid input. Please enter a string.")
            s = input()
    if not is_palindrome(s):  
        temp = ''
        for c in s:
            if len(temp) <= len(s) // 2:  
                temp += c
            else:  
                if s[0] == s[-1]:  
                    temp = s[1:-1]
                else:
                    temp = s[:len(s)//2 + 1] + c + s[len(s)//2:]
        return temp
    else:  
        return s