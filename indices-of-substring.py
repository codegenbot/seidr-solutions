def indices_of_substring(text):
    target = [t.strip() for t in input().split(',')]
    result = [i for t in target for i in range(len(text)-len(t)+1) if text[i:i+len(t)] == t]
    return list(set(result))