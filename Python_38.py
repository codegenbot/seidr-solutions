Here is the modified code:

```
def decode_cyclic():
    s = input("Enter a cyclic string: ")
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        result += s[i]
        i += 1
    n = len(result)
    for r in range(2, n + 1):
        if n % r != 0:
            continue
        period = result[:r]
        temp = ""
        for j in range(r):
            temp += result[j]
        while temp:
            if temp == period:
                result = result[:-len(period)]
                break
            temp = temp[1:] + temp[0]
    return result

print(decode_cyclic())