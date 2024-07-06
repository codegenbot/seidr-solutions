def indices_of_substring(text, target):
    start = 0
    while start < len(text):
        start = text.find(target, start)
        if start == -1:
            break
        yield start
        start += len(target)