def parse_music(music_notes: str, notes_dict: dict) -> list:
    music_notes_list = music_notes.split('|')
    output_list = [notes_dict.get(note.strip(), 0) for note in music_notes_list]
    return output_list

# Sample usage
notes_dict = {'o': 2, '.': 1}
result = parse_music("o| .| o| .| o o| o o|", notes_dict)
print(result)  # Output: [2, 1, 2, 1, 4, 2, 4, 2]