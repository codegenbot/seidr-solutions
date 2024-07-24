def decode_cyclic(s: str):
    n = len(s)
    res = ''
    i = 0
    while i < n:
        if s[i] == '[':
            j = i + 1
            k = 1
            while k > 0 and j < n:
                if s[j] == '[':
                    k += 1
                elif s[j] == ']':
                    k -= 1
                j += 1
            decoded_group = s[i+1:j].replace(']', '')[1:-1]
            res += decoded_group[0] * (len(decoded_group) // 2)
            i = j
        else:
            if len(res) > 0 and len(res[-1]) == 3:
                res[-1] = (res[-1][1:] + res[-1][0])
            else:
                res += s[i]
            i += 1
    return res