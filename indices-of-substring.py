def indices_of_substring():
    text = input().strip()
    target = input().strip()
    
    if len(target) > len(text):
        return [0]
    
    if target == "":
        indices = [i for i in range(len(text) + 1)]
    else:
        indices = [
            i
            for i in range(len(text) - len(target) + 1)
            if text[i : i + len(target)] == target
        ]

    return indices

print(*indices_of_substring())