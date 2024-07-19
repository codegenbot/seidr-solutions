def parse_music(music_strings, notes):
    def get_notes(music_strings, notes):
        music_notes = music_strings.split("|")
        return [notes[note.strip()] for note in music_notes if note.strip() in notes]

    return get_notes(music_strings, notes)

# Example usage
notes = {'.': 1, 'o': 2, ' ': 4}
result = parse_music("o| .| o| .| o o| o o|", notes)
assert result == [2, 1, 2, 1, 4, 2, 4, 2]
print(result)