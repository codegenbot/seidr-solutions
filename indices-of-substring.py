def indices_of_substring(text, target):
    result = [0]
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
            while (i + len(target)) <= len(text):
                i += 1
                if text[i-1:i-1+len(target)] == target:
                    result.append(i-1)