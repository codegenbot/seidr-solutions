def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    if not target:
        print(0)
        return
    
    indices = [i for i in range(len(text) - len(target) + 1) if target in text[i:i + len(target)]]
    for index in indices:
        print(index)

indices_of_substring()