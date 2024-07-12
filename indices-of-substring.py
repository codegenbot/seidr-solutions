def indices_of_substring(text):
    targets = [t.strip() for t in input().split(',')]
    result = []
    for t in targets:
        for i in range(len(text)):
            if text[i:i+len(t)] == t:
                result.append(i)
    return list(set(result))