def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    indices = [i for i in range(len(text) - len(target) + 1) if any(text[j:j+len(target)] == target for j in range(i, i+len(target))]
    
    print(indices)

indices_of_substring()