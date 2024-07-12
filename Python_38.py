def decode_cyclic():
    num_groups = int(input("Enter the number of groups: "))
    s = input("Enter the string: ")
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i:i+3]
            result += group[1] + group[0] + group[2]
            i += 3
        else:
            result += s[i:]
            break
    return result[:num_groups*3]