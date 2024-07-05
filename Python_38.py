```
def decode_cyclic(s):
    if s[0] in ["<", ">"]:
        cyclic = s
        while cyclic.find("<") != -1:
            start = cyclic.find("<")
            end = cyclic.find(">", start)
            result += cyclic[start+1:end]
            cyclic = cyclic[end+1:]
        return result.strip()
    else:
        return s