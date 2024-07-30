def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    music_notes = [note.strip().lower() for note in music_string.split(",")]
    if not all(note in notes for note in music_notes):
        return []
    return [notes[note] for note in music_notes]

result = parse_music(input("Enter music notes separated by comma: ").strip())
print(result)