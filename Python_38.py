```Python
def decode_cyclic():
    while True:
        s = input("Enter the cyclic string (or 'stop' to quit): ")
        if s.lower() == 'stop':
            break
        result = ""
        i = 0
        if len(s) <= 1:
            return s
        while True:
            group = s[i:i+1] + s[i+2::-1][::-1] + s[i+1]
            result += group[-1] + group[1:-1][::-1] + group[0]
            i = (i+1)%len(s)
            if i == 0:
                break
        print("Decoded string: ", result)

decode_cyclic()