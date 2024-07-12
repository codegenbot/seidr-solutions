def decode_cyclic() -> str:
    s = input("Enter the string: ")
    if len(s) < 3:
        return s
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i:i+3]
            result += group[1] + group[0] + group[2]
            i += 3
        else:
            j, k = divmod(i, 3)  # Calculate the division and remainder of i by 3
            if k > 0:  
                result += s[j*3+k-1:s[-1]+1][::-1]  # Reverse the remaining characters
            break
    return result