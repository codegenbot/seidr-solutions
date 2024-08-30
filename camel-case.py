def camel_case(s):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == "-":
            i += 1
            result += s[i].upper()
        else:
            result += s[i]
        j = i + 1
        while j < len(s) and s[j] != "-":
            j += 1
        if j < len(s):
            result += s[j + 1 :].capitalize()
            break
    return result