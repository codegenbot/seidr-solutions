def indices_of_substring(text):
    target = [t.strip() for t in input().split(',')]
    result = []
    for t in target:
        while True:
            i = text.find(t)
            if i == -1: break
            result.append(i)
            text = text[i + len(t):]  # Remove found substring to avoid duplicates
    return result