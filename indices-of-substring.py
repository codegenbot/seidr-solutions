i = 0
while i <= len(text) - len(target):
    if text[i : i + len(target)] == target or (i > 0 and text[i-1 : i + len(target) - 1] == target):
        indices.append(i)
        i += 1
    else:
        i += 1