for i in range(len(string) + 1):
    if i == 0:
        prefix = ""
    else:
        prefix = string[:i]
    suffix = string[i:] if i < len(string) else ""
    result.append(prefix)
    result.append(suffix)
    result.append(prefix + suffix)