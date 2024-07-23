```
def fruit_distribution(s,n):
    s = s.lower()
    if not s.isalpha():
        return "Invalid input: Please enter a string containing only letters."
    n -= int(''.join(filter(str.isdigit, s))) + int(''.join(filter(str.isdigit, [c for c in s if c != ' ' and c != 'o' and c != 'a'])))
    return n