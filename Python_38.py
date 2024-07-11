def decode_cyclic():
    try:
        s = input("Enter the cyclic string: ")
        if len(s) == 0:
            return "Please enter a non-empty string"
        result = ""
        i = 0
        if len(s) <= 1:
            return s
        if s != s[1:] + s[-1]:
            return "Not a cyclic string. Please enter a cyclic string."
        while True:
            if i == 0:
                group = s[i] + ''.join([s[(i+1)%len(s)], next(reversed(s[i]))]) + s[i]
            else:
                group = s[i%len(s)] + ''.join([s[(i-1)%len(s)], next(reversed(s[i%len(s)]))]) + s[i%len(s]]
            if i > 0:
                result += group[-1] + group[1:-1][::-1] + group[0]
            else:
                result = group
            i = (i+1)%len(s)
            if i == 0:
                break
        return result
    except Exception as e:
        print(f"An error occurred: {e}")