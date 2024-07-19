def check_strings(a, b):
    return len(a) == len(b) and b in a * 2 and a != b

cycpattern_check = "abab"
result = check_strings(cycpattern_check, "ab")
print(result)