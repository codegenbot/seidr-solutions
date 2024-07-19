def parse_music(music_strings, notes):
    def get_notes(music_strings, notes):
        music_notes = music_strings.split("|")
        return [notes[note.strip()] for note in music_notes if note.strip() in notes]

    return get_notes(music_strings, notes)

notes = {'.': 2, 'o': 1, ' ': 4}
result = parse_music("o| .| o| .| o o| o o|", notes)
assert result == [1, 2, 1, 2, 4, 1, 4, 1]
print(result)