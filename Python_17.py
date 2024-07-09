def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string.split() if note in notes]

# Read input from user
music_input = input("Enter the music string: ")
result = parse_music(music_input)
print(result)