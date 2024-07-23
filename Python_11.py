```
def string_xor(a: str, b: str) -> str:
    a = bin(int(a or '0', 2))[2:]
    b = bin(int(b or '0', 2))[2:]
    
    result = ""
    max_length = max(len(a), len(b))
    for i in range(max_length):
        if i < len(a) and i < len(b):
            if a[i] == "1" and b[i] == "0":
                result = "1" + result
            elif a[i] == "0" and b[i] == "1":
                result = "1" + result
            else:
                result = "0" + result
        else:
            if i < len(a):
                result = a[i] + result
            elif i < len(b):
                result = b[i] + result
    
    return result