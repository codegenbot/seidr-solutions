```
def string_xor(a: str, b: str) -> str:
    a = bin(int(a or '0', 2))[2:]
    b = bin(int(b or '0', 2))[2:]
    
    result = ""
    for i in range(max(len(a), len(b))):
        if i < len(a) and i < len(b):
            result += '1' if (a[-1-i] == "1" and not b[-1-i]) else '0'
        else:
            if i < len(a):
                result = a[-1-i] + result
            elif i < len(b):
                result = b[-1-i] + result
    
    return result