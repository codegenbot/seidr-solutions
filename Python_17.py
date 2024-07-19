def parse_music(music_notes, notes):
    result = []
    for note in music_notes.split('|'):
        for char in note:
            result.append(notes.get(char, 0))
        result.append(4)
    result.pop()
    return result

notes = {'.': 2, 'o': 1, ' ': 4}
result = parse_music("o| .| o| .| o o| o o|", notes)

assert result == [1, 2, 1, 2, 4, 1, 4, 1]
print(result)