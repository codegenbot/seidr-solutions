def parse_music(s):
    s = s.lower()
    o_count = [0]
    for word in s.split():
        if 'o' in word:
            count = word.count('o')
            o_count.append(count)
        else:
            o_count.append(0)
    return o_count
print(parse_music("o| .| o| .| o o| o o|"))