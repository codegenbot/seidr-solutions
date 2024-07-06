
def digits(n):
    if n < 0:
        return len(str(-n)) - 1
    else:
        max_digit = max(map(int, str(abs(n))))
        return max_digit

Modified code:

def digits(n):
    if n < 0:
        return len(str(-n)) - 1
    else:
        max_digit = max(map(int, str(abs(n))))
        return max_digit - 9