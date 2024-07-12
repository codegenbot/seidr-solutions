def indices_of_substring(text):
    targets = ['target1', 'target2']
    result = []
    for target in targets:
        target = target.strip()
        for i in range(len(text)):
            if text[i:i+len(target)] == target:
                result.append(i)
    return list(set(result))