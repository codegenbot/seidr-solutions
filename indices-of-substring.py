def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text) - len(target) + 2) if text[i:i+len(target)] == target and (i == 0 or text[i-1] != target[0]) and (i + len(target) == len(text) or text[i + len(target)] != target[0])]

    for index in indices:
        print(index)


indices_of_substring()