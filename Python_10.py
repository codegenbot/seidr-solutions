def solve_task(s):
    result = ""
    i, j = 0, len(s) - 1
    while i <= j:
        if s[i].isalpha() and s[j].isalpha():
            if s[i].lower() == s[j].lower():
                result += (s[i] * 2)
                i += 1
                j -= 1
            else:
                result += s[i]
                i += 1
                result += s[j]
                j -= 1
        elif s[i].isalpha():
            result += s[i]
            i += 1
        elif s[j].isalpha():
            result += s[j]
            j -= 1
        else:
            if s[i] != s[j]:
                return "Invalid input"
            i += 1
            j -= 1
    return result

input_str = input("Enter a string: ")
print(solve_task(input_str))