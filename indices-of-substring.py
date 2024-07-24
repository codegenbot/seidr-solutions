def indices_of_substring():
    text = input().strip()
    target = input().strip()

    indices = [i for i in range(len(text) - len(target) + 1) if (len(target) == 1 and text[i] == target) or (len(target) > 1 and (text[i:i + len(target)] == target or text.find(target, i) == i or (i < len(text)-1 and text[i+1] == target)))]

    return indices

print(indices_of_substring())