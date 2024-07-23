```
def decode_cyclic():
    s = input("Enter a cyclic string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        if i + 1 < n and s[i] == s[i+1]:
            j = int(input("Enter the number of repetitions: "))
            for _ in range(j):
                result += s[i]
            i += j
        elif i == n - 1:
            if s[0] == s[-1]:
                j = int(input("Enter the number of repetitions: "))
                for _ in range(j):
                    result += s[0]
                break
            else:
                result += s[i]
            break
        else:
            result += s[i]
        i += 1
    return result

print(decode_cyclic())