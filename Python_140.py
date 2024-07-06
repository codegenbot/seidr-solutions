def compress_string(s):
    compressed = ""
    i = 0
    while i < len(s):
        count = 1
        while i + 1 < len(s) and s[i] == s[i+1]:
            i += 1
            count += 1
        compressed += str(count) + s[i] if count > 1 else s[i]
        i += 1
    return compressed