def indices_of_substring(text):
    targets = input().split(',')
    result = [i for target in [text[i:i+len(t)] for t in [t.strip() for t in targets]] for i in range(len(text)-len(target)+1) if text[i:i+len(target)]==target and i not in [j for j in result]]
    return result