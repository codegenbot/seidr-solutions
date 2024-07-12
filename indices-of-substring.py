```
def indices_of_substring(text):
    target = input().split(',')
    result = []
    for t in target:
        t = t.strip()
        for i in range(len(text)):
            if text[i:i+len(t)] == t:
                result.append(i)
    return list(set(result))