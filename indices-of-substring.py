def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target and (i == 0 or text[i-1] != target[0])]

    for index in indices:
        print(index)


indices_of_substring()