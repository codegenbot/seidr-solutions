def replace_spaces(s):
    result = ''
    for i in range(len(s)):
        if s[i] == ' ':
            if len(result) > 0 and result[-1] != ' ':
                result += '%20'
            else:
                result += s[i]
        else:
            result += s[i]
    return result