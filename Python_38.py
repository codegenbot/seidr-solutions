Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    i = 0
    while i < len(s):
        if (i+3) <= len(s):  # if there are at least three characters left in string
            group = s[i:i+3]
        else:
            group = s[i:]  # if less than three characters left, take the rest of the string
        result += group[1] + group[0]  # decode by moving first character to end
        i += 3