def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    count = 0
    for i in range(len(text) - len(target) + 1):
        if text[i:i + len(target)] == target:
            count += 1
    
    print(count)

indices_of_substring()