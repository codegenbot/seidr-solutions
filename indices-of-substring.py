def indices_of_substring(text, target):
    result = []
    pos = 0
    text = ''.join(e for e in str(text) if e.isalnum()).lower()
    target = ''.join(e for e in str(target) if e.isalnum()).lower()
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += len(target)