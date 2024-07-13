Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s): # group of three characters found
            result += s[i+1:i+3] + s[i]
        else:
            result += s[i:] # remaining characters
        i += 3