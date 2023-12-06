def anti_shuffle(s):
    result = ""
    for i in range(len(s)):
        if s[i] == ' ':
            result += " "
        else:
            j = i + 1
            while j < len(s) and s[j] != ' ':
                if s[j] > s[i]:
                    swap(s[i], s[j])
                j += 1
    return result
