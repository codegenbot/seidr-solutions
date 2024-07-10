def reverse_string(string, i):
    return string + string[:i][::-1] if i > 0 else string